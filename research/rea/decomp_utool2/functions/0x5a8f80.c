// rea decompile_all
// name: FUN_005a8f80
// address: 0x5a8f80
// body: available
// range: 0x5a8f80-0x5a904f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a8f80(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717b10;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x154) == 0) {
    operator_new(0x188);
    local_8 = 0;
    puVar3 = (undefined4 *)FUN_005a8780(in_ECX);
    local_8 = 0xffffffff;
    puVar1 = *(undefined4 **)(in_ECX + 0x154);
    if ((puVar1 != puVar3) &&
       (*(undefined4 **)(in_ECX + 0x154) = puVar3, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    if (*(int *)(in_ECX + 0x154) != 0) {
      FUN_006e5050(*(int *)(in_ECX + 0x154),0xffffffff);
    }
  }
  FUN_005a9300(DAT_00c8a5d4,1,1);
  FUN_005a7750(uVar2);
  FUN_006e9e70(1);
  FUN_006e9910(1);
  ExceptionList = local_10;
  return;
}

