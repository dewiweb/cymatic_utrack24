// rea decompile_all
// name: FUN_006215b0
// address: 0x6215b0
// body: available
// range: 0x6215b0-0x62162f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006215b0(uint param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *in_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  pbVar2 = (byte *)*in_ECX;
  iVar7 = -1;
  local_8 = 0;
  bVar1 = *pbVar2;
  do {
    if (bVar1 == 0) {
      return iVar7;
    }
    pbVar2 = pbVar2 + 1;
    uVar5 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar3 = 0x40;
      iVar6 = 0;
      uVar4 = 0x7f;
      if ((bVar1 & 0x40) != 0) {
        do {
          if (uVar3 < 9) break;
          uVar3 = uVar3 >> 1;
          iVar6 = iVar6 + 1;
          uVar4 = uVar4 >> 1;
        } while ((uVar5 & uVar3) != 0);
      }
      uVar5 = uVar5 & uVar4;
      for (; (iVar6 = iVar6 + -1, -1 < iVar6 && ((*pbVar2 & 0xc0) == 0x80)); pbVar2 = pbVar2 + 1) {
        uVar5 = *pbVar2 & 0x3f | uVar5 << 6;
      }
    }
    bVar1 = *pbVar2;
    if (uVar5 == param_1) {
      iVar7 = local_8;
    }
    local_8 = local_8 + 1;
  } while( true );
}

