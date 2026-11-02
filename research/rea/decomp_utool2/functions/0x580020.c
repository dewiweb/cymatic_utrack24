// rea decompile_all
// name: FUN_00580020
// address: 0x580020
// body: available
// range: 0x580020-0x58012f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00580020(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007127d6;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    uVar2 = FUN_006e6400(local_20);
    puVar3 = (undefined4 *)FUN_006d37f0(local_30,param_1,uVar2);
    FUN_006e9790(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    FUN_006e62c0(uVar1);
    FUN_006e9e70(1);
    FUN_006e9910(1);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
    if (*(int *)(in_ECX + -0xc) == 0) {
      *(undefined4 *)(in_ECX + -0x10) = 0x32;
      *(undefined4 *)(in_ECX + -0xc) = 0x32;
      local_8 = 0;
      if (DAT_00c8a668 == 0) {
        operator_new(0x54);
        DAT_00c8a668 = FUN_004635f0();
      }
      FUN_00463c00(in_ECX + -0x14);
    }
    else {
      FUN_00463b90();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  }
  ExceptionList = local_10;
  return;
}

