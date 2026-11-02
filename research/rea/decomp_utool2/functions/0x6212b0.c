// rea decompile_all
// name: FUN_006212b0
// address: 0x6212b0
// body: available
// range: 0x6212b0-0x621396 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006212b0(char *param_1)

{
  byte bVar1;
  wint_t wVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *in_ECX;
  int iVar7;
  byte *pbVar8;
  _locale_t unaff_EDI;
  
  if (*param_1 != '\0') {
    pbVar8 = (byte *)*in_ECX;
    iVar3 = FUN_0044ec90();
    iVar4 = FUN_0044ec90();
    iVar7 = 0;
    if (-1 < iVar4 - iVar3) {
      do {
        iVar5 = FUN_0045e120(pbVar8,param_1);
        if (iVar5 == 0) {
          if (iVar7 != 0) {
            FUN_0044ebd0(0xffffffff);
            wVar2 = FUN_00426f70();
            iVar5 = FID_conflict__iswalnum(wVar2,unaff_EDI);
            if (iVar5 != 0) goto LAB_00621350;
          }
          FUN_0044ebd0(iVar3);
          wVar2 = FUN_00426f70();
          iVar5 = FID_conflict__iswalnum(wVar2,unaff_EDI);
          if (iVar5 == 0) {
            return iVar7;
          }
        }
LAB_00621350:
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        if ((char)bVar1 < '\0') {
          uVar6 = 0x40;
          if ((bVar1 & 0x40) != 0) {
            do {
              if (uVar6 < 9) break;
              uVar6 = uVar6 >> 1;
              pbVar8 = pbVar8 + 1;
            } while ((uVar6 & (int)(char)bVar1) != 0);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 <= iVar4 - iVar3);
    }
  }
  return -1;
}

