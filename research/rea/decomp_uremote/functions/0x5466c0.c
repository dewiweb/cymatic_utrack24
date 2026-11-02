// rea decompile_all
// name: FUN_005466c0
// address: 0x5466c0
// body: available
// range: 0x5466c0-0x54697a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005466c0(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_dc;
  int local_d0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d2643;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_005af82d(0x100,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if (iVar2 == 0) {
    local_d0 = 0;
  }
  else {
    local_d0 = FUN_005465a0(param_3,0,1);
  }
  local_8 = 0xffffffff;
  if (local_d0 != 0) {
    FUN_005560c0(param_2);
    uVar3 = FUN_00507350(*param_1 | 0x8000,param_1 + 1,&DAT_0095c848,param_1[7],param_1[8],
                         param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],param_1[0xe],
                         param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],param_1[0x13],
                         param_1[0x14],param_1[0x15],(short)param_1[0x16],
                         *(undefined2 *)((int)param_1 + 0x5a),*(undefined4 *)(param_3 + 0xd8),
                         &DAT_0095c908);
    local_8 = 1;
    FUN_005074c0(uVar3);
    local_8 = 0xffffffff;
    FUN_005074a0();
    if (local_d0 == 0) {
      local_dc = 0;
    }
    else {
      local_dc = local_d0 + 0x60 + *(int *)(*(int *)(local_d0 + 0x60) + 4);
    }
    cVar1 = FUN_00544180(0,&DAT_0095c848,param_3 + 0x3f8,param_4,500,10,local_dc);
    if (cVar1 != '\0') {
      ExceptionList = local_10;
      return local_d0;
    }
    FUN_005442f0(0);
  }
  ExceptionList = local_10;
  return 0;
}

