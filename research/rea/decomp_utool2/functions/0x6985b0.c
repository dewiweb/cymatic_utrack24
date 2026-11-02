// rea decompile_all
// name: FUN_006985b0
// address: 0x6985b0
// body: available
// range: 0x6985b0-0x698657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006985b0(int param_1)

{
  int *piVar1;
  int *in_ECX;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined1 *puStack_30;
  uint *puStack_2c;
  undefined1 local_18 [20];
  
  FUN_006e6400(auStack_38);
  FUN_006ce9f0(1);
  puStack_30 = (undefined1 *)in_ECX[0x2a];
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  if (puStack_30 != (undefined1 *)0x0) {
    puStack_2c = (uint *)0x1;
    uStack_34 = 0x6985fa;
    puStack_2c = (uint *)FUN_00699020();
    puStack_30 = local_18;
    uStack_34 = 0x698605;
    piVar1 = (int *)FUN_006d7870();
    in_ECX[0x2b] = *(int *)(param_1 + 8) - *piVar1;
    puStack_2c = (uint *)(param_1 + 0x10);
    if ((*puStack_2c >> 5 & 1) != 0) {
      puStack_30 = (undefined1 *)in_ECX[0x2a];
      uStack_34 = 0x69862d;
      (**(code **)(*in_ECX + 0xb0))();
    }
  }
  if ((*(char *)((int)in_ECX + 0x97) != '\0') && ((*(uint *)(param_1 + 0x10) >> 5 & 1) != 0)) {
    puStack_2c = (uint *)in_ECX[0x2a];
    puStack_30 = (undefined1 *)0x698650;
    (**(code **)(*in_ECX + 0xbc))();
  }
  return;
}

