// rea decompile_all
// name: FUN_0002d448
// address: 0x2d448
// body: available
// range: 0x2d448-0x2d4b7 inclusive
// range: 0x2d4c2-0x2d4cf inclusive
// range: 0x2d4da-0x2d5c5 inclusive
// range: 0x2d5c8-0x2d661 inclusive
// range: 0x2d66c-0x2d72d inclusive
// range: 0x2d738-0x2d835 inclusive
// range: 0x2d864-0x2d9c3 inclusive
// range: 0x2d9ce-0x2dad3 inclusive
// range: 0x2dad6-0x2db2f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002d448(int *param_1,int param_2)

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
  iVar3 = FUN_000366e0(_DAT_0002d838);
  if (iVar3 != 0) {
    FUN_0002f9bc(_DAT_0002d838);
    uVar4 = FUN_0003997c(*param_1);
    FUN_0002f9fc(6,s__FSM__d__Current_event__s_0002d83b + 1,*(undefined2 *)(param_1[3] + 2),uVar4);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  bVar6 = *(char *)(param_2 + 4) == '\x01';
  if (bVar6) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if (*(char *)(param_2 + 4) == '\x0e') {
    FUN_0003a450(param_1[3]);
  }
  if (bVar6) goto LAB_0002d64a;
  iVar3 = param_1[3];
  if (*(char *)(*(int *)(iVar3 + 0x274) + 0x14) != '\0') {
    switch(*(undefined1 *)(iVar3 + 0x25a)) {
    case 0:
      cVar1 = *(char *)(param_2 + 4);
      goto joined_r0x0002d4de;
    case 1:
      cVar1 = *(char *)(param_2 + 4);
      goto joined_r0x0002d4e6;
    case 2:
      cVar1 = *(char *)(param_2 + 4);
      goto joined_r0x0002d5d6;
    case 3:
      cVar1 = *(char *)(param_2 + 4);
      goto joined_r0x0002d4fe;
    case 4:
      cVar1 = *(char *)(param_2 + 4);
      if (cVar1 != '\b') {
        if (cVar1 == '\x03') goto LAB_0002d522;
        if (cVar1 == '\x05') goto LAB_0002d546;
        if ((cVar1 != '\x0f') && (cVar1 != '\x10')) goto joined_r0x0002d576;
      }
      break;
    case 5:
    case 6:
    case 7:
      *(undefined1 *)(param_1 + 1) = 4;
      goto LAB_0002d64a;
    case 8:
      cVar1 = *(char *)(param_2 + 4);
      if (cVar1 != '\b') {
        if (cVar1 == '\x03') goto LAB_0002d522;
        if (cVar1 == '\x05') goto LAB_0002d546;
        if ((cVar1 != '\x10') && (cVar1 != '\x0f')) {
joined_r0x0002d594:
          if (cVar1 == '\n') {
            uVar2 = 9;
            goto LAB_0002d4f6;
          }
          goto LAB_0002d9b4;
        }
      }
      break;
    case 9:
      cVar1 = *(char *)(param_2 + 4);
      if (cVar1 != '\b') {
        bVar6 = true;
        if (cVar1 == '\x03') goto LAB_0002d536;
        if (cVar1 == '\x05') goto LAB_0002d546;
        if ((cVar1 != '\x10') && (cVar1 != '\x0f')) {
          bVar6 = true;
          if ((cVar1 == '\t') || (bVar6 = true, cVar1 == '\x12')) goto LAB_0002d55e;
          goto LAB_0002d9b4;
        }
      }
      break;
    default:
      goto LAB_0002d9b4;
    }
LAB_0002d5ce:
    uVar2 = 4;
    goto LAB_0002d4f6;
  }
  switch(*(undefined1 *)(iVar3 + 0x25a)) {
  case 0:
    cVar1 = *(char *)(param_2 + 4);
joined_r0x0002d4de:
    if (cVar1 == '\0') {
LAB_0002d5e4:
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_0002d64a;
    }
    break;
  case 1:
    cVar1 = *(char *)(param_2 + 4);
joined_r0x0002d4e6:
    if (cVar1 == '\r') goto LAB_0002d5ce;
    break;
  case 2:
    cVar1 = *(char *)(param_2 + 4);
joined_r0x0002d5d6:
    if (cVar1 == '\x03') goto LAB_0002d522;
    if (cVar1 == '\x04') goto LAB_0002d5e4;
    break;
  case 3:
    cVar1 = *(char *)(param_2 + 4);
joined_r0x0002d4fe:
    if (cVar1 == '\x02') goto LAB_0002d5e4;
    break;
  case 4:
    cVar1 = *(char *)(param_2 + 4);
    if (cVar1 == '\b') {
LAB_0002d51e:
      uVar2 = 6;
    }
    else {
      if (cVar1 == '\x03') goto LAB_0002d522;
      if (cVar1 == '\x05') goto LAB_0002d546;
      if (cVar1 == '\x0f') goto LAB_0002d54a;
      if (cVar1 != '\x10') goto joined_r0x0002d576;
LAB_0002d526:
      uVar2 = 5;
    }
    goto LAB_0002d4f6;
  case 5:
    cVar1 = *(char *)(param_2 + 4);
    if (cVar1 == '\a') goto LAB_0002d51e;
    bVar6 = cVar1 == '\x03';
LAB_0002d536:
    if (bVar6) goto LAB_0002d522;
    if (cVar1 == '\x05') goto LAB_0002d546;
    if (cVar1 == '\x0f') goto LAB_0002d54a;
joined_r0x0002d576:
    if (cVar1 == '\x11') goto LAB_0002d52a;
    break;
  case 6:
    cVar1 = *(char *)(param_2 + 4);
    if (cVar1 == '\x03') goto LAB_0002d522;
    if (cVar1 == '\x05') {
LAB_0002d546:
      uVar2 = 2;
    }
    else {
      if (cVar1 == '\x0f') {
LAB_0002d54a:
        uVar2 = 7;
        goto LAB_0002d4f6;
      }
      bVar6 = cVar1 == '\x11';
LAB_0002d55e:
      if (!bVar6) break;
LAB_0002d52a:
      uVar2 = 8;
    }
    goto LAB_0002d4f6;
  case 7:
    cVar1 = *(char *)(param_2 + 4);
    if (cVar1 == '\b') goto LAB_0002d51e;
    if (cVar1 != '\x03') {
      if (cVar1 == '\x05') goto LAB_0002d546;
      if (cVar1 == '\x10') goto LAB_0002d526;
      goto joined_r0x0002d576;
    }
    goto LAB_0002d522;
  case 8:
    cVar1 = *(char *)(param_2 + 4);
    if (cVar1 == '\b') goto LAB_0002d51e;
    if (cVar1 != '\x03') {
      if (cVar1 != '\x05') {
        if (cVar1 == '\x10') goto LAB_0002d526;
        if (cVar1 != '\x0f') goto joined_r0x0002d594;
        goto LAB_0002d54a;
      }
      goto LAB_0002d546;
    }
LAB_0002d522:
    uVar2 = 3;
LAB_0002d4f6:
    *(undefined1 *)(param_1 + 1) = uVar2;
LAB_0002d64a:
    switch(*(undefined1 *)(param_1[3] + 0x25a)) {
    case 4:
      if ((*(char *)(*param_1 + 4) == '\b') && ((char)param_1[1] == '\x06')) {
        cVar1 = *DAT_0002d858;
joined_r0x0002d6c0:
        if (cVar1 != '\x01') goto LAB_0002d6da;
      }
      break;
    case 5:
      FUN_0003c8a4(param_1[3] + 0x328);
      break;
    case 6:
      FUN_0003c8a4(param_1[3] + 0x2e0);
      FUN_0003c8a4(param_1[3] + 0x2f8);
      break;
    case 7:
      if ((*(char *)(*param_1 + 4) == '\b') && ((char)param_1[1] == '\x06')) {
        cVar1 = *DAT_0002d858;
        goto joined_r0x0002d6c0;
      }
      break;
    case 8:
      if (((*(char *)(*param_1 + 4) == '\b') && ((char)param_1[1] == '\x06')) &&
         (*DAT_0002d858 == '\0')) {
LAB_0002d6da:
        FUN_0003ac80(param_1[3]);
        FUN_0002b0e4();
      }
      break;
    case 9:
      if ((((*(char *)(*param_1 + 4) == '\b') && ((char)param_1[1] == '\x06')) ||
          ((char)param_1[1] == '\x02')) || ((char)param_1[1] == '\x03')) {
        FUN_0003ac80(param_1[3]);
        FUN_0002b0e4();
      }
      FUN_000365f4(param_1[3] + 0x234);
      FUN_0002bba8();
      *DAT_0002d858 = '\0';
    }
    switch((char)param_1[1]) {
    default:
      goto switchD_0002d72c_caseD_0;
    case '\x01':
      FUN_0002f57c(1);
      FUN_0003c8a4(param_1[3] + 0x310);
      break;
    case '\x02':
      FUN_0002f57c(2);
      FUN_0003c8a4(param_1[3] + 0x310);
      FUN_0003c8a4(param_1[3] + 0x358);
      break;
    case '\x03':
      FUN_0002f57c(3);
      FUN_0003c8a4(param_1[3] + 0x310);
      FUN_0003c8a4(param_1[3] + 0x358);
      break;
    case '\x04':
      FUN_0002f57c(4);
      if (*(char *)(param_1[3] + 0x268) != *(char *)(param_1[3] + 0x26a)) {
        FUN_0003b028();
      }
      FUN_0003c808(param_1[3] + 0x310);
      iVar3 = param_1[3];
      if (*(char *)(iVar3 + 0x26d) != '\x02') goto switchD_0002d72c_caseD_0;
      goto LAB_0002d7c4;
    case '\x05':
      FUN_0002f57c(5);
      FUN_0003c8a4(param_1[3] + 0x310);
      if (*(char *)(param_1[3] + 0x268) != *(char *)(param_1[3] + 0x269)) {
        FUN_0003b028();
      }
      uVar4 = DAT_0002d85c;
      if ((char)((int *)*param_1)[1] != '\x10') {
        iVar3 = FUN_000366e0(DAT_0002d85c);
        if (iVar3 != 0) {
          FUN_0002f9bc(uVar4);
          FUN_0002f9fc(3,DAT_0002d860);
        }
        break;
      }
      if (*(int *)*param_1 == 0) {
        FUN_00039968(&local_28,7);
        FUN_0003acbe(param_1[3],&local_28);
        break;
      }
      iVar3 = FUN_001e11e8((int)*(char *)(param_1[3] + 0x268));
      FUN_0003c79c(param_1[3] + 0x328,iVar3 * *(int *)*param_1,0);
      iVar3 = param_1[3] + 0x328;
      goto LAB_0002d930;
    case '\x06':
      FUN_0002f57c(6);
      FUN_0003c8a4(param_1[3] + 0x310);
      iVar3 = param_1[3];
      if (*(char *)(iVar3 + 0x268) != *(char *)(iVar3 + 0x269)) {
        FUN_0003b028(iVar3);
      }
      FUN_0002bbf4(0);
      FUN_0003c808(param_1[3] + 0x2e0);
      FUN_0003c808(param_1[3] + 0x2f8);
      uVar2 = FUN_0002b51c(*(undefined2 *)(param_1[3] + 2));
      *(undefined1 *)(param_1[3] + 0x25b) = uVar2;
      break;
    case '\a':
      FUN_0002f57c(7);
      iVar3 = param_1[3];
      if (*(char *)(iVar3 + 0x268) != *(char *)(iVar3 + 0x26a)) {
        FUN_0003b028(iVar3);
      }
      iVar3 = param_1[3] + 0x310;
LAB_0002d930:
      FUN_0003c808(iVar3);
      break;
    case '\b':
      FUN_0002f57c(8);
      if (*(char *)(param_1[3] + 0x268) != *(char *)(param_1[3] + 0x26a)) {
        FUN_0003b028();
      }
      FUN_0003c808(param_1[3] + 0x310);
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      FUN_0002b6a8(0,0,0,0);
      break;
    case '\t':
      FUN_0002f57c(9);
      if (*(char *)(param_1[3] + 0x268) != *(char *)(*(int *)(param_1[3] + 0x27c) + 0x16)) {
        FUN_0003b028();
      }
      FUN_0003ad10(param_1[3]);
      FUN_0003c808(param_1[3] + 0x310);
      *DAT_0002db30 = 1;
    }
    goto switchD_0002d9c2_caseD_0;
  case 9:
    cVar1 = *(char *)(param_2 + 4);
    if (cVar1 == '\b') goto LAB_0002d51e;
    if (cVar1 == '\x03') goto LAB_0002d522;
    if (cVar1 == '\x05') goto LAB_0002d546;
    if (cVar1 == '\x10') goto LAB_0002d526;
    if (cVar1 == '\x0f') goto LAB_0002d54a;
    if ((cVar1 == '\t') || (cVar1 == '\x12')) goto LAB_0002d52a;
  }
LAB_0002d9b4:
  switch(*(undefined1 *)(iVar3 + 0x25a)) {
  default:
    goto switchD_0002d9c2_caseD_0;
  case 4:
    if (*(char *)(*param_1 + 4) != '\x14') goto switchD_0002d9c2_caseD_0;
    cVar1 = *(char *)(iVar3 + 0x26d);
    goto joined_r0x0002d9f6;
  case 5:
    if (*(char *)(*param_1 + 4) != '\x14') goto switchD_0002d9c2_caseD_0;
    cVar1 = *(char *)(iVar3 + 0x26d);
joined_r0x0002d9f6:
    if (cVar1 != '\x02') goto switchD_0002d9c2_caseD_0;
    goto LAB_0002dad6;
  case 6:
    if (*(char *)(*param_1 + 4) == '\v') {
      FUN_00039558(param_1[4]);
    }
    if (*(char *)(*param_1 + 4) == '\f') {
      FUN_00038748(param_1[4]);
    }
    if (*(char *)(*param_1 + 4) != '\x14') goto switchD_0002d9c2_caseD_0;
    cVar1 = *(char *)(param_1[3] + 0x26d);
    break;
  case 7:
    if (*(char *)(*param_1 + 4) != '\x14') goto switchD_0002d9c2_caseD_0;
    cVar1 = *(char *)(iVar3 + 0x26d);
    break;
  case 8:
    if (*(char *)(*param_1 + 4) != '\x14') goto switchD_0002d9c2_caseD_0;
    cVar1 = *(char *)(iVar3 + 0x26d);
    break;
  case 9:
    if (*(char *)(*param_1 + 4) == '\x13') {
      if (*(char *)(iVar3 + 0x26d) != '\x01') goto switchD_0002d9c2_caseD_0;
      FUN_00038954(param_1[4]);
      uVar4 = FUN_0003a02a(param_1[3] + 0x250);
      FUN_0003c83c(param_1[3] + 0x340,uVar4);
      FUN_0003c808(param_1[3] + 0x340);
    }
    if (*(char *)(*param_1 + 4) != '\x14') goto switchD_0002d9c2_caseD_0;
    cVar1 = *(char *)(param_1[3] + 0x26d);
  }
  if (cVar1 == '\x02') {
LAB_0002dad6:
    FUN_00038ed8(param_1[4]);
    iVar3 = param_1[3];
LAB_0002d7c4:
    uVar4 = FUN_0003a052(iVar3 + 0x250);
    FUN_0003c83c(param_1[3] + 0x358,uVar4);
    FUN_0003c808(param_1[3] + 0x358);
switchD_0002d72c_caseD_0:
  }
switchD_0002d9c2_caseD_0:
  uVar4 = DAT_0002db34;
  if ((char)param_1[1] != '\0') {
    iVar3 = FUN_000366e0(DAT_0002db34);
    if (iVar3 != 0) {
      FUN_0002f9bc(uVar4);
      uVar5 = _DAT_0002db3c;
      if (*(byte *)param_1[2] < 10) {
        uVar5 = *(undefined4 *)(DAT_0002db38 + (uint)*(byte *)param_1[2] * 4);
      }
      FUN_0002f9fc(6,s___FSM__d__Exit___s_0002db3e + 2,*(undefined2 *)(param_1[3] + 2),uVar5);
    }
    *(char *)(param_1[3] + 0x25a) = (char)param_1[1];
    iVar3 = FUN_000366e0(uVar4);
    if (iVar3 != 0) {
      FUN_0002f9bc(uVar4);
      uVar4 = _DAT_0002db3c;
      if (*(byte *)param_1[2] < 10) {
        uVar4 = *(undefined4 *)(DAT_0002db38 + (uint)*(byte *)param_1[2] * 4);
      }
      FUN_0002f9fc(6,s_FSM__d__Entry___s_0002db54,*(undefined2 *)(param_1[3] + 2),uVar4);
    }
  }
  *param_1 = 0;
  return;
}

