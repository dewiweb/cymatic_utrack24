// rea decompile_all
// name: FUN_00578550
// address: 0x578550
// body: available
// range: 0x578550-0x57865f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00578550(undefined4 param_1,ushort param_2,undefined4 param_3,ushort param_4,ushort param_5,
                ushort param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  int local_2c;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d5026;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0054f6b0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_1c = 0;
  FUN_00501870(param_1);
  local_8 = 0;
  cVar1 = FUN_00503020();
  if (cVar1 != '\0') {
    uVar6 = (uint)param_6;
    uVar2 = (uint)param_5;
    uVar5 = (uint)param_4;
    uVar3 = (uint)param_2;
    uVar4 = FUN_00501d60(uVar3,param_3,uVar5,uVar2,uVar6);
    local_1c = FUN_005a20a0(in_ECX + -0x130,uVar4,uVar3,param_3,uVar5,uVar2,uVar6);
    *(uint *)(in_ECX + -0xc0) = *(uint *)(in_ECX + -0xc0) | 0x40020;
  }
  FUN_0054f6f0();
  if (local_1c == 0) {
    local_2c = 0;
  }
  else {
    local_2c = local_1c + 0x28 + *(int *)(*(int *)(local_1c + 0x28) + 0xc);
  }
  local_8 = 0xffffffff;
  FUN_00501900();
  ExceptionList = local_10;
  return local_2c;
}

