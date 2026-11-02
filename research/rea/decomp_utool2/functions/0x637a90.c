// rea decompile_all
// name: FUN_00637a90
// address: 0x637a90
// body: available
// range: 0x637a90-0x637b1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00637a90(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int *in_ECX;
  int *piVar4;
  uint uVar5;
  
  if (param_2 < 1) {
    iVar2 = *in_ECX;
    *param_1 = iVar2;
    piVar4 = (int *)(iVar2 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      return param_1;
    }
  }
  else {
    pbVar3 = (byte *)*in_ECX;
joined_r0x00637ac4:
    param_2 = param_2 + -1;
    if (-1 < param_2) {
      bVar1 = *pbVar3;
      if (bVar1 == 0) {
        *param_1 = (int)&DAT_00bfe12c;
        return param_1;
      }
      pbVar3 = pbVar3 + 1;
      if ((char)bVar1 < '\0') {
        uVar5 = 0x40;
        if ((bVar1 & 0x40) != 0) {
          do {
            if (uVar5 < 9) break;
            uVar5 = uVar5 >> 1;
            pbVar3 = pbVar3 + 1;
          } while ((uVar5 & (int)(char)bVar1) != 0);
        }
      }
      goto joined_r0x00637ac4;
    }
    FUN_0045cb50(pbVar3);
  }
  return param_1;
}

