// rea decompile_all
// name: FUN_005a0f10
// address: 0x5a0f10
// body: available
// range: 0x5a0f10-0x5a100d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a0f10(int param_1)

{
  int in_ECX;
  int iVar1;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = in_ECX + 0x1c7c;
  if (param_1 == iVar1) {
    if (*(int *)(in_ECX + 0x1d00) != 1) {
      uStack_14 = 0x5a0f39;
      FUN_0063eab0();
      *(undefined4 *)(in_ECX + 0x1dac) = 0;
      *(undefined4 *)(in_ECX + 0x1d00) = 1;
      FUN_006e6400(auStack_20);
      FUN_006ce9f0(1);
    }
    iVar1 = in_ECX + 0x1db0;
  }
  else {
    if (param_1 != in_ECX + 0x1db0) goto LAB_005a0feb;
    if (*(int *)(in_ECX + 0x1e34) != 1) {
      uStack_14 = 0x5a0f87;
      FUN_0063eab0();
      *(undefined4 *)(in_ECX + 0x1ee0) = 0;
      *(undefined4 *)(in_ECX + 0x1e34) = 1;
      FUN_006e6400(auStack_20);
      FUN_006ce9f0(1);
    }
  }
  if (*(int *)(iVar1 + 0x84) != 0) {
    uStack_14 = 0x5a0fc3;
    FUN_0063eab0();
    *(undefined4 *)(iVar1 + 0x130) = 0;
    *(undefined4 *)(iVar1 + 0x84) = 0;
    FUN_006e6400(auStack_20);
    FUN_006ce9f0(1);
  }
LAB_005a0feb:
  iVar1 = *(int *)(in_ECX + 8);
  uStack_14 = 0x5a0ff6;
  FUN_005a5980();
  uStack_14 = *(undefined4 *)(iVar1 + 0x22d0);
  uStack_18 = 0x5a1007;
  FUN_005a2c30();
  return;
}

