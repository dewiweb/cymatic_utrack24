// rea decompile_all
// name: FUN_00546be0
// address: 0x546be0
// body: available
// range: 0x546be0-0x546e41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00546be0(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_144 [104];
  undefined4 uStack_dc;
  undefined1 *puStack_d8;
  int iStack_d4;
  uint uStack_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_98 [12];
  undefined1 *local_8c;
  undefined1 local_88 [12];
  undefined1 *local_7c;
  undefined1 local_78 [12];
  undefined1 *local_6c;
  undefined1 local_68 [88];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d26d0;
  local_10 = ExceptionList;
  uStack_d0 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iStack_d4 = 0x546c16;
  FUN_00512300();
  local_8 = 0;
  if (param_1 != 0) {
    *(undefined1 *)(local_b0 + 0xf4) = 1;
  }
  local_b4 = *(int *)(local_b0 + 0xf0);
  if (local_b4 == 0) {
    iStack_d4 = param_1 + 1;
    local_6c = auStack_144;
    local_bc = FUN_005071c0(local_b0 + 0x80);
    local_8._0_1_ = 1;
    local_a4 = *(undefined4 *)(local_b0 + 0x7c);
    local_b8 = local_bc;
    FUN_0052dce0(local_78);
    uVar4 = 0x16;
    puVar3 = local_78;
    uVar2 = FUN_00544700(puVar3,0x16);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_005360d0(uVar2,puVar3,uVar4);
  }
  else if (local_b4 == 1) {
    iStack_d4 = param_1 + 1;
    local_7c = auStack_144;
    local_c4 = FUN_005071c0(local_b0 + 0x80);
    local_8._0_1_ = 2;
    local_a8 = *(undefined4 *)(local_b0 + 0x7c);
    local_c0 = local_c4;
    FUN_0052dce0(local_88);
    uVar4 = 0x17;
    puVar3 = local_88;
    uVar2 = FUN_00544700(puVar3,0x17);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_005360d0(uVar2,puVar3,uVar4);
  }
  else if (local_b4 == 2) {
    iStack_d4 = param_1 + 1;
    local_8c = auStack_144;
    local_cc = FUN_005071c0(local_b0 + 0x80);
    local_8._0_1_ = 3;
    local_ac = *(undefined4 *)(local_b0 + 0x7c);
    local_c8 = local_cc;
    FUN_0052dce0(local_98);
    uVar4 = 0x18;
    puVar3 = local_98;
    uVar2 = FUN_00544700(puVar3,0x18);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_005360d0(uVar2,puVar3,uVar4);
  }
  iStack_d4 = 0;
  puStack_d8 = local_68;
  uStack_dc = 0x546e0e;
  cVar1 = FUN_00544740();
  if (cVar1 == '\0') {
    iStack_d4 = 1;
    puStack_d8 = (undefined1 *)0x546e22;
    FUN_00544280();
  }
  local_8 = 0xffffffff;
  iStack_d4 = 0x546e31;
  FUN_005123f0();
  ExceptionList = local_10;
  return;
}

