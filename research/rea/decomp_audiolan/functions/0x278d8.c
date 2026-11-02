// rea decompile_all
// name: FUN_000278d8
// address: 0x278d8
// body: available
// range: 0x278d8-0x27947 inclusive
// range: 0x27952-0x2795f inclusive
// range: 0x2796a-0x27a55 inclusive
// range: 0x27a58-0x27af1 inclusive
// range: 0x27afc-0x27bbd inclusive
// range: 0x27bc8-0x27cc5 inclusive
// range: 0x27cf4-0x27e53 inclusive
// range: 0x27e5e-0x27f63 inclusive
// range: 0x27f66-0x27fbf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000278d8(int *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  *param_1 = param_2;
  iVar3 = FUN_00030b90(_DAT_00027cc8);
  if (iVar3 != 0) {
    FUN_00029e6c(_DAT_00027cc8);
    uVar4 = FUN_00033de0(*param_1);
    FUN_00029eac(6,s__FSM__d__Current_event__s_00027ccb + 1,*(undefined2 *)(param_1[3] + 2),uVar4);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  bVar6 = *(char *)(param_2 + 4) == '\x01';
  if (bVar6) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if (*(char *)(param_2 + 4) == '\x0e') {
    FUN_000348b4(param_1[3]);
  }
  if (bVar6) goto LAB_00027ada;
  iVar3 = param_1[3];
  if (*(char *)(*(int *)(iVar3 + 0x274) + 0x14) != '\0') {
    switch(*(undefined1 *)(iVar3 + 0x25a)) {
    case 0:
      cVar1 = *(char *)(param_2 + 4);
      goto joined_r0x0002796e;
    case 1:
      cVar1 = *(char *)(param_2 + 4);
      goto joined_r0x00027976;
    case 2:
      cVar1 = *(char *)(param_2 + 4);
      goto joined_r0x00027a66;
    case 3:
      cVar1 = *(char *)(param_2 + 4);
      goto joined_r0x0002798e;
    case 4:
      cVar1 = *(char *)(param_2 + 4);
      if (cVar1 != '\b') {
        if (cVar1 == '\x03') goto LAB_000279b2;
        if (cVar1 == '\x05') goto LAB_000279d6;
        if ((cVar1 != '\x0f') && (cVar1 != '\x10')) goto joined_r0x00027a06;
      }
      break;
    case 5:
    case 6:
    case 7:
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_00027ada;
    case 8:
      cVar1 = *(char *)(param_2 + 4);
      if (cVar1 != '\b') {
        if (cVar1 == '\x03') goto LAB_000279b2;
        if (cVar1 == '\x05') goto LAB_000279d6;
        if ((cVar1 != '\x10') && (cVar1 != '\x0f')) {
joined_r0x00027a24:
          if (cVar1 == '\n') {
            uVar2 = 9;
            goto LAB_00027986;
          }
          goto LAB_00027e44;
        }
      }
      break;
    case 9:
      cVar1 = *(char *)(param_2 + 4);
      if (cVar1 != '\b') {
        bVar6 = true;
        if (cVar1 == '\x03') goto LAB_000279c6;
        if (cVar1 == '\x05') goto LAB_000279d6;
        if ((cVar1 != '\x10') && (cVar1 != '\x0f')) {
          bVar6 = true;
          if ((cVar1 == '\t') || (bVar6 = true, cVar1 == '\x12')) goto LAB_000279ee;
          goto LAB_00027e44;
        }
      }
      break;
    default:
      goto LAB_00027e44;
    }
LAB_00027a5e:
    uVar2 = 4;
    goto LAB_00027986;
  }
  switch(*(undefined1 *)(iVar3 + 0x25a)) {
  case 0:
    cVar1 = *(char *)(param_2 + 4);
joined_r0x0002796e:
    if (cVar1 == '\0') {
LAB_00027a74:
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_00027ada;
    }
    break;
  case 1:
    cVar1 = *(char *)(param_2 + 4);
joined_r0x00027976:
    if (cVar1 == '\r') goto LAB_00027a5e;
    break;
  case 2:
    cVar1 = *(char *)(param_2 + 4);
joined_r0x00027a66:
    if (cVar1 == '\x03') goto LAB_000279b2;
    if (cVar1 == '\x04') goto LAB_00027a74;
    break;
  case 3:
    cVar1 = *(char *)(param_2 + 4);
joined_r0x0002798e:
    if (cVar1 == '\x02') goto LAB_00027a74;
    break;
  case 4:
    cVar1 = *(char *)(param_2 + 4);
    if (cVar1 == '\b') {
LAB_000279ae:
      uVar2 = 6;
    }
    else {
      if (cVar1 == '\x03') goto LAB_000279b2;
      if (cVar1 == '\x05') goto LAB_000279d6;
      if (cVar1 == '\x0f') goto LAB_000279da;
      if (cVar1 != '\x10') goto joined_r0x00027a06;
LAB_000279b6:
      uVar2 = 5;
    }
    goto LAB_00027986;
  case 5:
    cVar1 = *(char *)(param_2 + 4);
    if (cVar1 == '\a') goto LAB_000279ae;
    bVar6 = cVar1 == '\x03';
LAB_000279c6:
    if (bVar6) goto LAB_000279b2;
    if (cVar1 == '\x05') goto LAB_000279d6;
    if (cVar1 == '\x0f') goto LAB_000279da;
joined_r0x00027a06:
    if (cVar1 == '\x11') goto LAB_000279ba;
    break;
  case 6:
    cVar1 = *(char *)(param_2 + 4);
    if (cVar1 == '\x03') goto LAB_000279b2;
    if (cVar1 == '\x05') {
LAB_000279d6:
      uVar2 = 2;
    }
    else {
      if (cVar1 == '\x0f') {
LAB_000279da:
        uVar2 = 7;
        goto LAB_00027986;
      }
      bVar6 = cVar1 == '\x11';
LAB_000279ee:
      if (!bVar6) break;
LAB_000279ba:
      uVar2 = 8;
    }
    goto LAB_00027986;
  case 7:
    cVar1 = *(char *)(param_2 + 4);
    if (cVar1 == '\b') goto LAB_000279ae;
    if (cVar1 != '\x03') {
      if (cVar1 == '\x05') goto LAB_000279d6;
      if (cVar1 == '\x10') goto LAB_000279b6;
      goto joined_r0x00027a06;
    }
    goto LAB_000279b2;
  case 8:
    cVar1 = *(char *)(param_2 + 4);
    if (cVar1 == '\b') goto LAB_000279ae;
    if (cVar1 != '\x03') {
      if (cVar1 != '\x05') {
        if (cVar1 == '\x10') goto LAB_000279b6;
        if (cVar1 != '\x0f') goto joined_r0x00027a24;
        goto LAB_000279da;
      }
      goto LAB_000279d6;
    }
LAB_000279b2:
    uVar2 = 3;
LAB_00027986:
    *(undefined1 *)(param_1 + 1) = uVar2;
LAB_00027ada:
    switch(*(undefined1 *)(param_1[3] + 0x25a)) {
    case 4:
      if ((*(char *)(*param_1 + 4) == '\b') && ((char)param_1[1] == '\x06')) {
        cVar1 = *DAT_00027ce8;
joined_r0x00027b50:
        if (cVar1 != '\x01') goto LAB_00027b6a;
      }
      break;
    case 5:
      FUN_00036bf0(param_1[3] + 0x328);
      break;
    case 6:
      FUN_00036bf0(param_1[3] + 0x2e0);
      FUN_00036bf0(param_1[3] + 0x2f8);
      break;
    case 7:
      if ((*(char *)(*param_1 + 4) == '\b') && ((char)param_1[1] == '\x06')) {
        cVar1 = *DAT_00027ce8;
        goto joined_r0x00027b50;
      }
      break;
    case 8:
      if (((*(char *)(*param_1 + 4) == '\b') && ((char)param_1[1] == '\x06')) &&
         (*DAT_00027ce8 == '\0')) {
LAB_00027b6a:
        FUN_000350e4(param_1[3]);
        FUN_00025560();
      }
      break;
    case 9:
      if ((((*(char *)(*param_1 + 4) == '\b') && ((char)param_1[1] == '\x06')) ||
          ((char)param_1[1] == '\x02')) || ((char)param_1[1] == '\x03')) {
        FUN_000350e4(param_1[3]);
        FUN_00025560();
      }
      FUN_00030aa4(param_1[3] + 0x234);
      FUN_00026038();
      *DAT_00027ce8 = '\0';
    }
    switch((char)param_1[1]) {
    default:
      goto switchD_00027bbc_caseD_0;
    case '\x01':
      FUN_00029a2c(1);
      FUN_00036bf0(param_1[3] + 0x310);
      break;
    case '\x02':
      FUN_00029a2c(2);
      FUN_00036bf0(param_1[3] + 0x310);
      FUN_00036bf0(param_1[3] + 0x358);
      break;
    case '\x03':
      FUN_00029a2c(3);
      FUN_00036bf0(param_1[3] + 0x310);
      FUN_00036bf0(param_1[3] + 0x358);
      break;
    case '\x04':
      FUN_00029a2c(4);
      if (*(char *)(param_1[3] + 0x268) != *(char *)(param_1[3] + 0x26a)) {
        FUN_0003548c();
      }
      FUN_00036b54(param_1[3] + 0x310);
      iVar3 = param_1[3];
      if (*(char *)(iVar3 + 0x26d) != '\x02') goto switchD_00027bbc_caseD_0;
      goto LAB_00027c54;
    case '\x05':
      FUN_00029a2c(5);
      FUN_00036bf0(param_1[3] + 0x310);
      if (*(char *)(param_1[3] + 0x268) != *(char *)(param_1[3] + 0x269)) {
        FUN_0003548c();
      }
      uVar4 = DAT_00027cec;
      if ((char)((int *)*param_1)[1] != '\x10') {
        iVar3 = FUN_00030b90(DAT_00027cec);
        if (iVar3 != 0) {
          FUN_00029e6c(uVar4);
          FUN_00029eac(3,DAT_00027cf0);
        }
        break;
      }
      if (*(int *)*param_1 == 0) {
        FUN_00033dcc(&local_28,7);
        FUN_00035122(param_1[3],&local_28);
        break;
      }
      iVar3 = FUN_001907c4((int)*(char *)(param_1[3] + 0x268));
      FUN_00036ae8(param_1[3] + 0x328,iVar3 * *(int *)*param_1,0);
      iVar3 = param_1[3] + 0x328;
      goto LAB_00027dc0;
    case '\x06':
      FUN_00029a2c(6);
      FUN_00036bf0(param_1[3] + 0x310);
      iVar3 = param_1[3];
      if (*(char *)(iVar3 + 0x268) != *(char *)(iVar3 + 0x269)) {
        FUN_0003548c(iVar3);
      }
      FUN_00026084(0);
      FUN_00036b54(param_1[3] + 0x2e0);
      FUN_00036b54(param_1[3] + 0x2f8);
      uVar2 = FUN_00025998(*(undefined2 *)(param_1[3] + 2));
      *(undefined1 *)(param_1[3] + 0x25b) = uVar2;
      break;
    case '\a':
      FUN_00029a2c(7);
      iVar3 = param_1[3];
      if (*(char *)(iVar3 + 0x268) != *(char *)(iVar3 + 0x26a)) {
        FUN_0003548c(iVar3);
      }
      iVar3 = param_1[3] + 0x310;
LAB_00027dc0:
      FUN_00036b54(iVar3);
      break;
    case '\b':
      FUN_00029a2c(8);
      if (*(char *)(param_1[3] + 0x268) != *(char *)(param_1[3] + 0x26a)) {
        FUN_0003548c();
      }
      FUN_00036b54(param_1[3] + 0x310);
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      FUN_00025b38(0,0,0,0);
      break;
    case '\t':
      FUN_00029a2c(9);
      if (*(char *)(param_1[3] + 0x268) != *(char *)(*(int *)(param_1[3] + 0x27c) + 0x16)) {
        FUN_0003548c();
      }
      FUN_00035174(param_1[3]);
      FUN_00036b54(param_1[3] + 0x310);
      *DAT_00027fc0 = 1;
    }
    goto switchD_00027e52_caseD_0;
  case 9:
    cVar1 = *(char *)(param_2 + 4);
    if (cVar1 == '\b') goto LAB_000279ae;
    if (cVar1 == '\x03') goto LAB_000279b2;
    if (cVar1 == '\x05') goto LAB_000279d6;
    if (cVar1 == '\x10') goto LAB_000279b6;
    if (cVar1 == '\x0f') goto LAB_000279da;
    if ((cVar1 == '\t') || (cVar1 == '\x12')) goto LAB_000279ba;
  }
LAB_00027e44:
  switch(*(undefined1 *)(iVar3 + 0x25a)) {
  default:
    goto switchD_00027e52_caseD_0;
  case 4:
    if (*(char *)(*param_1 + 4) != '\x14') goto switchD_00027e52_caseD_0;
    cVar1 = *(char *)(iVar3 + 0x26d);
    goto joined_r0x00027e86;
  case 5:
    if (*(char *)(*param_1 + 4) != '\x14') goto switchD_00027e52_caseD_0;
    cVar1 = *(char *)(iVar3 + 0x26d);
joined_r0x00027e86:
    if (cVar1 != '\x02') goto switchD_00027e52_caseD_0;
    goto LAB_00027f66;
  case 6:
    if (*(char *)(*param_1 + 4) == '\v') {
      FUN_000339bc(param_1[4]);
    }
    if (*(char *)(*param_1 + 4) == '\f') {
      FUN_00032bac(param_1[4]);
    }
    if (*(char *)(*param_1 + 4) != '\x14') goto switchD_00027e52_caseD_0;
    cVar1 = *(char *)(param_1[3] + 0x26d);
    break;
  case 7:
    if (*(char *)(*param_1 + 4) != '\x14') goto switchD_00027e52_caseD_0;
    cVar1 = *(char *)(iVar3 + 0x26d);
    break;
  case 8:
    if (*(char *)(*param_1 + 4) != '\x14') goto switchD_00027e52_caseD_0;
    cVar1 = *(char *)(iVar3 + 0x26d);
    break;
  case 9:
    if (*(char *)(*param_1 + 4) == '\x13') {
      if (*(char *)(iVar3 + 0x26d) != '\x01') goto switchD_00027e52_caseD_0;
      FUN_00032db8(param_1[4]);
      uVar4 = FUN_0003448e(param_1[3] + 0x250);
      FUN_00036b88(param_1[3] + 0x340,uVar4);
      FUN_00036b54(param_1[3] + 0x340);
    }
    if (*(char *)(*param_1 + 4) != '\x14') goto switchD_00027e52_caseD_0;
    cVar1 = *(char *)(param_1[3] + 0x26d);
  }
  if (cVar1 == '\x02') {
LAB_00027f66:
    FUN_0003333c(param_1[4]);
    iVar3 = param_1[3];
LAB_00027c54:
    uVar4 = FUN_000344b6(iVar3 + 0x250);
    FUN_00036b88(param_1[3] + 0x358,uVar4);
    FUN_00036b54(param_1[3] + 0x358);
switchD_00027bbc_caseD_0:
  }
switchD_00027e52_caseD_0:
  uVar4 = DAT_00027fc4;
  if ((char)param_1[1] != '\0') {
    iVar3 = FUN_00030b90(DAT_00027fc4);
    if (iVar3 != 0) {
      FUN_00029e6c(uVar4);
      uVar5 = s_3__0v__FSM__d__Exit___s_00027fc9._3_4_;
      if (*(byte *)param_1[2] < 10) {
        uVar5 = *(undefined4 *)(_DAT_00027fc8 + (uint)*(byte *)param_1[2] * 4);
      }
      FUN_00029eac(6,s_3__0v__FSM__d__Exit___s_00027fc9 + 7,*(undefined2 *)(param_1[3] + 2),uVar5);
    }
    *(char *)(param_1[3] + 0x25a) = (char)param_1[1];
    iVar3 = FUN_00030b90(uVar4);
    if (iVar3 != 0) {
      FUN_00029e6c(uVar4);
      uVar4 = s_3__0v__FSM__d__Exit___s_00027fc9._3_4_;
      if (*(byte *)param_1[2] < 10) {
        uVar4 = *(undefined4 *)(_DAT_00027fc8 + (uint)*(byte *)param_1[2] * 4);
      }
      FUN_00029eac(6,s_FSM__d__Entry___s_00027fe4,*(undefined2 *)(param_1[3] + 2),uVar4);
    }
  }
  *param_1 = 0;
  return;
}

