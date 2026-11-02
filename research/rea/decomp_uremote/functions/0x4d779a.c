// rea decompile_all
// name: FUN_004d779a
// address: 0x4d779a
// body: available
// range: 0x4d779a-0x4d7994 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004d779a(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  undefined *local_38;
  uint uStack_34;
  undefined1 *local_20;
  undefined1 local_1c [8];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e198e;
  local_14 = ExceptionList;
  uStack_34 = DAT_00955fd4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_14;
  local_38 = (undefined *)0xd0;
  puVar1 = (undefined4 *)FUN_005af82d();
  local_c = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    local_38 = &DAT_0095d718;
    FUN_004e57ec(puVar1,&DAT_0095d718);
    *puVar1 = juce::LookAndFeel_V2::SliderLabelComp::vftable;
    puVar1[0x1c] = juce::LookAndFeel_V2::SliderLabelComp::vftable;
    puVar1[0x1e] = juce::LookAndFeel_V2::SliderLabelComp::vftable;
    puVar1[0x1f] = juce::LookAndFeel_V2::SliderLabelComp::vftable;
    puVar1[0x20] = juce::LookAndFeel_V2::SliderLabelComp::vftable;
  }
  local_c = 0xffffffff;
  local_38 = (undefined *)0x24;
  FUN_004e5ca0();
  puVar1[0x32] = 2;
  FUN_004c1e29(&local_38,0x1001400,0);
  FUN_004c1eee(0x1000281);
  local_38 = (undefined *)0x4d7868;
  iVar2 = FUN_004e7d1a();
  if (iVar2 != 2) {
    local_38 = (undefined *)0x4d7874;
    iVar2 = FUN_004e7d1a();
    if (iVar2 != 3) {
      local_38 = (undefined *)0x0;
      FUN_004c1e29(&local_20,0x1001500);
    }
  }
  FUN_004d076d();
  FUN_004c1eee(0x1000280);
  local_20 = (undefined1 *)&local_38;
  FUN_004c1e29(&local_38,0x1001700,0);
  FUN_004c1eee(0x1000282);
  local_20 = (undefined1 *)&local_38;
  FUN_004c1e29(&local_38,0x1001400,0);
  FUN_004c1eee(0x1000201);
  local_38 = (undefined *)0x4d78ee;
  iVar2 = FUN_004e7d1a();
  uVar4 = _DAT_0095768c;
  if (iVar2 != 2) {
    local_38 = (undefined *)0x4d78fa;
    iVar2 = FUN_004e7d1a();
    uVar4 = _DAT_0095768c;
    if (iVar2 != 3) {
      uVar4 = 0x3f800000;
    }
  }
  local_20 = (undefined1 *)&local_38;
  ppuVar3 = &local_38;
  FUN_004c1e29(local_1c,0x1001500,0);
  FUN_0047620f(ppuVar3,uVar4);
  FUN_004c1eee(0x1000200);
  local_20 = (undefined1 *)&local_38;
  FUN_004c1e29(&local_38,0x1001700,0);
  FUN_004c1eee(0x1000205);
  local_20 = (undefined1 *)&local_38;
  FUN_004c1e29(&local_38,0x1001600,0);
  FUN_004c1eee(0x1000202);
  ExceptionList = local_14;
  return puVar1;
}

