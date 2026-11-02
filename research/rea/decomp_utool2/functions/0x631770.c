// rea decompile_all
// name: FUN_00631770
// address: 0x631770
// body: available
// range: 0x631770-0x6317ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00631770(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint uVar3;
  int iVar4;
  byte *local_8;
  
  local_8 = (byte *)*in_ECX;
  iVar4 = 0;
  bVar1 = *local_8;
  do {
    if (bVar1 == 0) {
      return -1;
    }
    if (iVar4 < param_1) {
      local_8 = local_8 + 1;
      if ((char)bVar1 < '\0') {
        uVar3 = 0x40;
        if ((bVar1 & 0x40) != 0) {
          do {
            if (uVar3 < 9) break;
            uVar3 = uVar3 >> 1;
            local_8 = local_8 + 1;
          } while ((uVar3 & (int)(char)bVar1) != 0);
        }
      }
    }
    else {
      iVar2 = FUN_00443260();
      if (iVar2 == param_2) {
        return iVar4;
      }
    }
    bVar1 = *local_8;
    iVar4 = iVar4 + 1;
  } while( true );
}

