// rea decompile_all
// name: FUN_0062a310
// address: 0x62a310
// body: available
// range: 0x62a310-0x62a3c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062a310(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  if (param_2 == '\0') {
    uVar3 = in_ECX[2];
joined_r0x0062a371:
    uVar3 = uVar3 - 1;
    if (-1 < (int)uVar3) {
      do {
        iVar1 = FUN_00443260();
        iVar2 = FUN_00443260();
        if ((iVar1 - iVar2 != 0) && ((iVar1 - iVar2 >> 0x1f & 0xfffffffeU) != 0xffffffff))
        goto joined_r0x0062a371;
      } while (iVar1 != 0);
      if (uVar3 < (uint)in_ECX[2]) {
        FUN_004179e0();
      }
      goto joined_r0x0062a371;
    }
  }
  else {
    uVar3 = in_ECX[2] - 1;
    if (-1 < (int)uVar3) {
      do {
        iVar1 = FUN_0045c1e0(*(undefined4 *)(*in_ECX + uVar3 * 4));
        if ((iVar1 == 0) && (uVar3 < (uint)in_ECX[2])) {
          FUN_004179e0();
        }
        uVar3 = uVar3 - 1;
      } while (-1 < (int)uVar3);
      return;
    }
  }
  return;
}

