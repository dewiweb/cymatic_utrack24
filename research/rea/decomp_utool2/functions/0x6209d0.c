// rea decompile_all
// name: FUN_006209d0
// address: 0x6209d0
// body: available
// range: 0x6209d0-0x620ab8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006209d0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *in_ECX;
  int *piVar7;
  byte *pbVar8;
  
  pbVar8 = (byte *)*in_ECX;
  bVar2 = *pbVar8;
  do {
    if (bVar2 == 0) {
      iVar4 = *in_ECX;
      *param_1 = iVar4;
      piVar7 = (int *)(iVar4 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      return;
    }
    FUN_00426f70();
    iVar4 = FUN_0045c230(param_2);
    if (iVar4 < 0) {
      pcVar3 = (char *)*in_ECX;
      if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
        iVar4 = (int)pbVar8 - (int)pcVar3;
        uVar5 = iVar4 + 4U & 0xfffffffc;
        puVar6 = (undefined4 *)FUN_004bfe22(uVar5 + 0xb);
        puVar6[1] = uVar5;
        puVar1 = puVar6 + 2;
        *puVar6 = 0;
        FUN_004c2c30(puVar1,pcVar3,iVar4);
        *(undefined1 *)((int)puVar1 + iVar4) = 0;
        *param_1 = (int)puVar1;
        return;
      }
      *param_1 = (int)&DAT_00bfe12c;
      return;
    }
    bVar2 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    if ((char)bVar2 < '\0') {
      uVar5 = 0x40;
      if ((bVar2 & 0x40) != 0) {
        do {
          if (uVar5 < 9) break;
          pbVar8 = pbVar8 + 1;
          uVar5 = uVar5 >> 1;
        } while ((uVar5 & (int)(char)bVar2) != 0);
      }
    }
    bVar2 = *pbVar8;
  } while( true );
}

