// rea decompile_all
// name: FUN_005b4fa0
// address: 0x5b4fa0
// body: available
// range: 0x5b4fa0-0x5b501f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005b4fa0(void)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *in_ECX;
  int iVar6;
  int iVar7;
  
  uVar4 = FUN_0062e1c0("\"#@,;:<>*^|?\\/");
  if ((char)uVar4 != '\0') {
LAB_005b4fba:
    return uVar4 & 0xffffff00;
  }
  pbVar3 = (byte *)*in_ECX;
  iVar7 = 0;
LAB_005b4fc6:
  iVar6 = 0;
  pbVar5 = pbVar3;
LAB_005b4fd0:
  do {
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    if ((char)bVar2 < '\0') {
      if ((*pbVar5 & 0xc0) == 0x80) {
        do {
          pbVar1 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
        } while ((*pbVar1 & 0xc0) == 0x80);
        iVar6 = iVar6 + 1;
        goto LAB_005b4fd0;
      }
    }
    else if (bVar2 == 0) break;
    iVar6 = iVar6 + 1;
  } while( true );
  if (iVar6 <= iVar7) {
    return CONCAT31((int3)((uint)pbVar5 >> 8),1);
  }
  FUN_0044ebd0(iVar7);
  uVar4 = FUN_00426f70();
  if (0x7f < uVar4) goto LAB_005b4fba;
  iVar7 = iVar7 + 1;
  goto LAB_005b4fc6;
}

