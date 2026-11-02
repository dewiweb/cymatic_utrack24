// rea decompile_all
// name: FUN_004e8c56
// address: 0x4e8c56
// body: available
// range: 0x4e8c56-0x4e8de2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004e8c56(undefined1 **param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  int *unaff_EDI;
  undefined1 **local_48 [6];
  undefined1 local_30 [12];
  undefined4 local_24 [3];
  undefined1 *local_18;
  undefined4 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x4e8c62;
  if (unaff_EDI[0xc] == 0) {
    local_48[0] = (undefined1 **)0x0;
    local_48[0] = (undefined1 **)thunk_FUN_0046085c();
    cVar1 = FUN_00464f6b();
    if (cVar1 != '\0') {
      return;
    }
  }
  local_48[0] = (undefined1 **)local_24;
  FUN_0049fe5a();
  local_8 = 0;
  local_48[0] = &local_18;
  FUN_004e7e90();
  local_8._0_1_ = 1;
  local_48[0] = (undefined1 **)(((float)unaff_EDI[2] + (float)unaff_EDI[1]) - (float)unaff_EDI[3]);
  local_14 = local_48[0];
  local_14 = (undefined4 *)FUN_004a8e4a();
  local_48[0] = (undefined1 **)(float)(int)local_14;
  FUN_0049fec9(unaff_EDI[7],unaff_EDI[4]);
  local_8._0_1_ = 0;
  local_48[0] = (undefined1 **)0x4e8ce2;
  FUN_004652d6();
  if (param_4 < *(int *)(unaff_EDI[6] + 8) + *unaff_EDI) {
    local_48[0] = (undefined1 **)local_24;
    FUN_0049fe8c(local_30);
    local_8._0_1_ = 2;
    local_48[0] = (undefined1 **)0x4e8d0e;
    FUN_0049feb8();
    local_48[0] = (undefined1 **)0x4e8d1d;
    FUN_0049feb8();
    local_48[0] = (undefined1 **)(unaff_EDI[7] + 4);
    local_18 = (undefined1 *)local_48;
    FUN_004d076d();
    FUN_0047cda7();
    local_48[0] = param_1;
    FUN_004a0fcb();
    local_8._0_1_ = 0;
    local_48[0] = (undefined1 **)0x4e8d4c;
    FUN_0049fea0();
  }
  if (*unaff_EDI < param_3) {
    local_48[0] = (undefined1 **)local_24;
    FUN_0049fe8c(local_30);
    local_8._0_1_ = 3;
    local_48[0] = (undefined1 **)0x4e8d74;
    FUN_0049feb8();
    local_48[0] = (undefined1 **)0x4e8d83;
    FUN_0049feb8();
    local_48[0] = (undefined1 **)(unaff_EDI[7] + 4);
    local_18 = (undefined1 *)local_48;
    FUN_004d076d();
    FUN_0047cda7();
    local_48[0] = param_1;
    FUN_004a0fcb();
    local_8._0_1_ = 0;
    local_48[0] = (undefined1 **)0x4e8db2;
    FUN_0049fea0();
  }
  local_18 = (undefined1 *)local_48;
  FUN_004d076d();
  FUN_0047cda7();
  local_48[0] = param_1;
  FUN_004a0fcb();
  local_48[0] = (undefined1 **)0x4e8ddb;
  FUN_0049fea0();
  return;
}

