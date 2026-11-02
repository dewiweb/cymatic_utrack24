// rea decompile_all
// name: FUN_0044f1ba
// address: 0x44f1ba
// body: available
// range: 0x44f1ba-0x44f3ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0044f1ba(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  *param_1 = MainComponent::vftable;
  param_1[0x1c] = MainComponent::vftable;
  param_1[0x1d] = MainComponent::vftable;
  param_1[0x1e] = MainComponent::vftable;
  FUN_004652d6();
  _free((void *)param_1[0x1858]);
  FUN_0047478c();
  FUN_004bfe57();
  FUN_0043f41f();
  puVar1 = &stack0xffffffdc;
  FUN_0043bd7f();
  puVar2 = puVar1 + -4;
  *(undefined4 *)(puVar1 + -4) = 0x44f244;
  FUN_0043bd7f();
  *(undefined4 **)(puVar2 + -4) = param_1 + 0x15f8;
  *(undefined4 *)(puVar2 + -8) = 0x44f254;
  FUN_0043c809();
  *(undefined4 **)(puVar2 + -4) = param_1 + 0x1424;
  *(undefined4 *)(puVar2 + -8) = 0x44f264;
  FUN_0043c809();
  *(undefined4 **)(puVar2 + -4) = param_1 + 0x1250;
  *(undefined4 *)(puVar2 + -8) = 0x44f274;
  FUN_0043c809();
  *(undefined4 **)(puVar2 + -4) = param_1 + 0x107c;
  *(undefined4 *)(puVar2 + -8) = 0x44f284;
  FUN_0043c809();
  *(undefined4 **)(puVar2 + -4) = param_1 + 0xea8;
  *(undefined4 *)(puVar2 + -8) = 0x44f294;
  FUN_0043c809();
  *(undefined4 **)(puVar2 + -4) = param_1 + 0xd86;
  *(undefined4 *)(puVar2 + -8) = 0x44f2a4;
  FUN_00450f82();
  *(undefined4 **)(puVar2 + -4) = param_1 + 0xd64;
  *(undefined4 *)(puVar2 + -8) = 0x44f2b4;
  FUN_0045fa1d();
  *(undefined4 **)(puVar2 + -4) = param_1 + 0xce5;
  *(undefined4 *)(puVar2 + -8) = 0x44f2c4;
  FUN_0043abd0();
  puVar3 = puVar2 + -4;
  *(undefined4 *)(puVar2 + -4) = 0x44f2cf;
  FUN_004c4d7a();
  *(undefined4 *)(puVar3 + -4) = 0x44f2de;
  FUN_004515c0();
  *(undefined4 **)(puVar3 + -4) = param_1 + 0xb7a;
  *(undefined4 *)(puVar3 + -8) = 0x44f2ee;
  FUN_00457ea2();
  *(undefined4 **)(puVar3 + -4) = param_1 + 0xb1c;
  *(undefined4 *)(puVar3 + -8) = 0x44f2fe;
  FUN_0043f7ba();
  *(undefined4 **)(puVar3 + -4) = param_1 + 0x8f2;
  *(undefined4 *)(puVar3 + -8) = 0x44f30e;
  FUN_00442279();
  *(undefined4 *)(puVar3 + -4) = 0x44f31d;
  FUN_00460141();
  *(undefined4 *)(puVar3 + -4) = param_1[0x88e];
  *(undefined4 *)(puVar3 + -8) = 0x44f32c;
  _free(*(void **)(puVar3 + -4));
  *(undefined4 **)(puVar3 + -4) = param_1 + 0x708;
  *(undefined4 *)(puVar3 + -8) = 0x44f33d;
  FUN_004556d0();
  *(undefined4 **)(puVar3 + -4) = param_1 + 0x582;
  *(undefined4 *)(puVar3 + -8) = 0x44f34d;
  FUN_00448b37();
  *(undefined4 **)(puVar3 + -4) = param_1 + 0x496;
  *(undefined4 *)(puVar3 + -8) = 0x44f35d;
  FUN_00456921();
  *(undefined4 **)(puVar3 + -4) = param_1 + 0x2da;
  *(undefined4 *)(puVar3 + -8) = 0x44f36d;
  FUN_0044596b();
  *(undefined4 **)(puVar3 + -4) = param_1 + 0x136;
  *(undefined4 *)(puVar3 + -8) = 0x44f37d;
  FUN_0044be97();
  *(undefined4 **)(puVar3 + -4) = param_1 + 0x112;
  *(undefined4 *)(puVar3 + -8) = 0x44f38d;
  FUN_00442a5d();
  puVar4 = puVar3 + -4;
  *(undefined4 *)(puVar3 + -4) = 0x44f398;
  FUN_004c4d7a();
  *(undefined4 *)(puVar4 + -4) = 0x44f3a7;
  FUN_00459245();
  *(undefined4 **)(puVar4 + -4) = param_1 + 0x84;
  *(undefined4 *)(puVar4 + -8) = 0x44f3b7;
  FUN_00459901();
  *(undefined4 **)(puVar4 + -4) = param_1 + 0x20;
  *(undefined4 *)(puVar4 + -8) = 0x44f3c7;
  FUN_0044347c();
  param_1[0x1e] = ConfirmDialog::Listener::vftable;
  param_1[0x1d] = AvailableDeviceList::Listener::vftable;
  param_1[0x1c] = uTrack::StatusListener::vftable;
  *(undefined4 *)(puVar4 + -4) = 0x44f3e7;
  FUN_004bfe57();
  *(undefined4 *)(puVar4 + -4) = 0x44f3ec;
  return;
}

