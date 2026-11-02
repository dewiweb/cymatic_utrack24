// rea decompile_all
// name: FUN_0043982e
// address: 0x43982e
// body: available
// range: 0x43982e-0x43996d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0043982e(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 local_24 [12];
  undefined1 *local_18;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x43983a;
  puStack_3c = local_14;
  puStack_40 = (undefined4 *)0x43984b;
  FUN_0046537e();
  local_8 = 0;
  puStack_3c = (undefined1 *)0x1;
  puStack_40 = (undefined4 *)0x7;
  local_18 = (undefined1 *)&uStack_44;
  FUN_004d076d();
  FUN_004ee39c(param_1,local_14);
  puStack_3c = (undefined1 *)0x439875;
  FUN_004652d6();
  puStack_3c = (undefined1 *)0x439880;
  puVar1 = (undefined4 *)FUN_00474777();
  *param_1 = MainWindow::vftable;
  *puVar1 = MainWindow::vftable;
  puStack_3c = (undefined1 *)0x439897;
  FUN_004fe0e5();
  puStack_3c = (undefined1 *)0x1;
  local_8._0_1_ = 4;
  puStack_40 = (undefined4 *)0x4398a4;
  FUN_004efc1f();
  puStack_3c = (undefined1 *)0x2710;
  puStack_40 = (undefined4 *)0x2710;
  uStack_44 = 600;
  FUN_004ef2c7(700);
  puStack_3c = (undefined1 *)0x4398bf;
  iVar2 = FUN_0044bfc5();
  puStack_3c = (undefined1 *)0x0;
  if (*(char *)(iVar2 + 0x2fc) == '\0') {
    puStack_40 = (undefined4 *)0x1;
    uStack_44 = 0x4398e6;
    FUN_004ef162();
    puStack_3c = (undefined1 *)0x74;
    puStack_40 = (undefined4 *)0x4398ed;
    local_18 = (undefined1 *)FUN_005af82d();
    local_8._0_1_ = 5;
    if (local_18 != (undefined1 *)0x0) {
      puStack_3c = (undefined1 *)param_2;
      uStack_44 = 0x439902;
      puStack_40 = (undefined4 *)local_18;
      FUN_004395f0();
    }
    local_8._0_1_ = 4;
    puStack_3c = (undefined1 *)0x439911;
    FUN_004eeec0();
  }
  else {
    puStack_40 = (undefined4 *)0x0;
    uStack_44 = 0x4398d2;
    FUN_004ef162();
    puStack_3c = (undefined1 *)0x0;
    puStack_40 = (undefined4 *)0x4398dd;
    FUN_004eeecc();
  }
  puStack_3c = (undefined1 *)0x439916;
  iVar2 = FUN_0044bfc5();
  if (*(char *)(iVar2 + 0x2fd) != '\0') {
    puStack_3c = (undefined1 *)0x439927;
    FUN_004ee588();
  }
  param_1[0x8e] = 0xffffffff;
  param_1[0x8f] = 0xffffffff;
  puStack_3c = local_24;
  puStack_40 = param_1;
  uStack_44 = 0x43993f;
  FUN_00439a05();
  puStack_3c = (undefined1 *)0x439947;
  FUN_004670ed();
  puStack_3c = (undefined1 *)0x43994e;
  FUN_00439b00();
  puStack_3c = (undefined1 *)0x1;
  puStack_40 = (undefined4 *)0x439957;
  FUN_004c0040();
  puStack_3c = (undefined1 *)0x43995c;
  FUN_004c4e62();
  puStack_3c = (undefined1 *)0x0;
  puStack_40 = (undefined4 *)0x439963;
  FUN_004f4e67();
  return param_1;
}

