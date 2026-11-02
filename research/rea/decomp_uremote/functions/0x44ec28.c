// rea decompile_all
// name: FUN_0044ec28
// address: 0x44ec28
// body: available
// range: 0x44ec28-0x44f18a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0044ec28(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_EDX;
  
  FUN_004bfd7b();
  param_1[0x1c] = uTrack::StatusListener::vftable;
  puVar1 = param_1 + 0x1d;
  *puVar1 = AvailableDeviceList::Listener::vftable;
  param_1[0x1e] = ConfirmDialog::Listener::vftable;
  param_1[0x1c] = MainComponent::vftable;
  param_1[0x1f] = param_2;
  *puVar1 = MainComponent::vftable;
  *param_1 = MainComponent::vftable;
  param_1[0x1e] = MainComponent::vftable;
  FUN_00443390(param_1 + 0x20);
  FUN_004596cc(param_1 + 0x84,param_1);
  FUN_004591a4(param_1 + 0xeb,param_1);
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  FUN_0049f4b3();
  FUN_004429c8(param_1 + 0x112,param_1);
  FUN_0044bd93(param_1 + 0x136);
  FUN_004456d2(param_1 + 0x2da);
  FUN_004567dc(param_1 + 0x496);
  FUN_004488af(param_1 + 0x582,param_1);
  FUN_00455499(param_1 + 0x708,param_1);
  param_1[0x88e] = 0;
  param_1[0x88f] = 0;
  param_1[0x890] = 0;
  FUN_00460101(param_1);
  FUN_004420fe(param_1 + 0x8f2,param_1);
  FUN_0043f5eb(param_1 + 0xb1c);
  FUN_00457d49(param_1 + 0xb7a,param_1,param_1 + 0xb1c);
  FUN_0045154e(param_1 + 0xc84,param_1);
  FUN_004c6ae2();
  FUN_0043ab1c(param_1 + 0xce5,param_1);
  FUN_0045f9ce(param_1);
  FUN_00450ec3(param_1 + 0xd86,param_1);
  puVar2 = param_1 + 0x1e;
  FUN_0043c30c(param_1 + 0xea8,puVar2);
  FUN_0043c30c(param_1 + 0x107c,puVar2);
  FUN_0043c30c(param_1 + 0x1250,puVar2);
  FUN_0043c30c(param_1 + 0x1424,puVar2);
  FUN_0043c30c(param_1 + 0x15f8,puVar2);
  FUN_0043bd28();
  FUN_0043bd28();
  FUN_0043f3f5();
  FUN_00450bca();
  param_1[0x1855] = 6;
  param_1[0x1857] = 0xb;
  param_1[0x1858] = 0;
  param_1[0x1859] = 0;
  param_1[0x185a] = 0;
  *(undefined1 *)(param_1 + 0x185b) = 0;
  FUN_004652cd();
  param_1[0x1856] = extraout_EDX;
  FUN_0047ed0f(&param_2,&PNG_008622f8,0x97235);
  FUN_0049f5e8();
  FUN_004c4d7a();
  FUN_004c1064(0xffffffff);
  FUN_004c1064(0xffffffff);
  FUN_004c1064(0xffffffff);
  FUN_004c1064(0xffffffff);
  FUN_004c1064(0xffffffff);
  FUN_004c1064(0xffffffff);
  FUN_004c1064(0xffffffff);
  FUN_004c1055(param_1 + 0x136);
  FUN_004c1055(param_1 + 0x2da);
  FUN_004c1055(param_1 + 0x496);
  FUN_004c1055(param_1 + 0x582);
  FUN_004c1055(param_1 + 0x708);
  param_2 = param_1 + 0x136;
  FUN_00450daf(&param_2);
  param_2 = param_1 + 0x2da;
  FUN_00450daf(&param_2);
  param_2 = param_1 + 0x496;
  FUN_00450daf(&param_2);
  param_2 = param_1 + 0x582;
  FUN_00450daf(&param_2);
  param_2 = param_1 + 0x708;
  FUN_00450daf(&param_2);
  FUN_004c1055(param_1 + 0xce5);
  FUN_004c1055(param_1 + 0xd64);
  FUN_004c1055(param_1 + 0x112);
  FUN_0046537e(&param_2);
  FUN_0043d144(&DAT_0095d718,&param_2,0);
  FUN_004652d6();
  FUN_004c1055(param_1 + 0xea8);
  FUN_0046537e(&param_2);
  FUN_0043d144(&DAT_0095d718,&param_2,0);
  FUN_004652d6();
  FUN_004c1055(param_1 + 0x107c);
  FUN_0046537e(&param_2);
  FUN_0043d144(&DAT_0095d718,&param_2,0);
  FUN_004652d6();
  FUN_004c1055(param_1 + 0x1250);
  FUN_004c1055(param_1 + 0x1424);
  FUN_0046537e(&param_2);
  FUN_0043d144(&DAT_0095d718,&param_2,0);
  FUN_004652d6();
  FUN_004c1055(param_1 + 0x15f8);
  FUN_004c1055(param_1 + 0xc84);
  FUN_004c1055(param_1 + 0xd86);
  FUN_004c1055(param_1 + 0x17f2);
  FUN_004c1055(param_1 + 0x17cd);
  FUN_004c1055(param_1 + 0x1817);
  FUN_004c1055(param_1 + 0x1834);
  FUN_0043e015();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00472fde();
  }
  FUN_0044fcbf();
  FUN_0044fdea();
  FUN_004c0be5(600);
  FUN_004c2ddc();
  return param_1;
}

