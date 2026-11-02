// rea decompile_all
// name: FUN_00522680
// address: 0x522680
// body: available
// range: 0x522680-0x522855 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00522680(void)

{
  undefined4 uVar1;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cfe62;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  for (local_18 = FUN_00522b00(DAT_00955fd4 ^ (uint)&stack0xfffffffc); local_18 != 0;
      local_18 = FUN_00522b40(local_18)) {
    FUN_00502720(&DAT_005e9ec0);
    uVar1 = FUN_00503a10(local_20);
    local_8 = 0;
    FUN_005026d0(uVar1);
    local_8 = 0xffffffff;
    FUN_00501900();
    FUN_00502720(" Size:");
    FUN_00502ce0(*(undefined2 *)(local_18 + 0xc));
    FUN_00502720(" Capacity:");
    FUN_00502ce0(*(undefined4 *)(local_18 + 0x10));
    FUN_00502720(&DAT_0090f4f0);
  }
  local_14 = FUN_00512850();
  while (local_18 != 0) {
    FUN_00502720("FCI S");
    uVar1 = FUN_00503a10(local_28);
    local_8 = 1;
    FUN_005026d0(uVar1);
    local_8 = 0xffffffff;
    FUN_00501900();
    FUN_00502720(&DAT_005e9ea0);
    uVar1 = FUN_00503a10(local_30);
    local_8 = 2;
    FUN_005026d0(uVar1);
    local_8 = 0xffffffff;
    FUN_00501900();
    FUN_00502720(" Size:");
    FUN_00502ce0(*(undefined2 *)(local_14 + 0x18));
    FUN_00502720(&DAT_0090f4f0);
    local_14 = FUN_00512890(local_14);
  }
  ExceptionList = local_10;
  return;
}

