// rea decompile_all
// name: FUN_00692570
// address: 0x692570
// body: available
// range: 0x692570-0x692672 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00692570(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *in_ECX;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  int *piStack_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721ae5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX[0x39] != param_1) {
    in_ECX[0x39] = param_1;
    FUN_006e6400(auStack_2c);
    FUN_006ce9f0(1);
    if (in_ECX[0x39] == 0) {
      puVar1 = (undefined4 *)in_ECX[0x3b];
      if (puVar1 != (undefined4 *)0x0) {
        in_ECX[0x3b] = 0;
        piStack_24 = (int *)0x6925e4;
        (**(code **)*puVar1)();
      }
    }
    else if (in_ECX[0x3b] == 0) {
      piStack_24 = (int *)0x6925f6;
      operator_new(0x74);
      local_8 = 0;
      puVar3 = (undefined4 *)FUN_004a24a0();
      local_8 = 0xffffffff;
      puVar1 = (undefined4 *)in_ECX[0x3b];
      if ((puVar1 != puVar3) && (in_ECX[0x3b] = (int)puVar3, puVar1 != (undefined4 *)0x0)) {
        piStack_24 = (int *)0x69262b;
        (**(code **)*puVar1)();
      }
      piVar2 = (int *)in_ECX[0x3b];
      if (piVar2 != (int *)0x0) {
        piStack_24 = (int *)0x69263e;
        (**(code **)(*piVar2 + 0x28))();
        uStack_28 = 0x692648;
        piStack_24 = piVar2;
        FUN_006e5050();
      }
      (**(code **)(*(int *)in_ECX[0x3b] + 0x90))();
    }
    (**(code **)(*in_ECX + 0x84))();
  }
  ExceptionList = local_10;
  return;
}

