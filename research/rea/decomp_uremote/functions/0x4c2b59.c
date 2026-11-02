// rea decompile_all
// name: FUN_004c2b59
// address: 0x4c2b59
// body: available
// range: 0x4c2b59-0x4c2bed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c2b59(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *unaff_EDI;
  undefined1 auStack_8c [4];
  undefined4 local_88;
  undefined1 *local_84;
  undefined1 auStack_80 [4];
  undefined1 auStack_74 [8];
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [4];
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined4 local_58;
  undefined1 local_4c [68];
  undefined1 *local_8;
  
  local_58 = 0x4c2b67;
  cVar1 = FUN_004c14d9();
  if (cVar1 == '\0') {
    local_58 = 0;
    puStack_5c = (undefined1 *)0x0;
    local_8 = auStack_64;
    local_68 = 0x4c2b7e;
    FUN_00467e6f();
    local_6c = param_3;
    local_8 = auStack_74;
    local_68 = param_4;
    FUN_00467e6f();
    local_8 = auStack_80;
    local_84 = auStack_80;
    local_88 = 0x4c2bb0;
    FUN_004c4937();
    local_88 = param_3;
    local_8 = auStack_8c;
    local_84 = (undefined1 *)param_4;
    FUN_004d076d();
    FUN_004c6ba4();
    local_58 = param_2;
    uStack_60 = 0x4c2be9;
    puStack_5c = local_4c;
    (**(code **)(*unaff_EDI + 0x68))();
  }
  return;
}

