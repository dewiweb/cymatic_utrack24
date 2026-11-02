// rea decompile_all
// name: FUN_0043107b
// address: 0x43107b
// body: available
// range: 0x43107b-0x431886 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


size_t FUN_0043107b(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  size_t sVar5;
  size_t sVar6;
  void *_Src;
  
  sVar5 = 0xffffffff;
  switch(param_2) {
  case 0:
    if (param_4 == (undefined4 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x1b1);
    goto LAB_0043172f;
  case 1:
    if (3 < param_3) {
      return 0xffffffff;
    }
    uVar1 = 0;
    if (param_4 == (undefined4 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    if (param_3 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x1b4);
    }
    else if (param_3 == 1) {
      uVar1 = *(undefined4 *)(param_1 + 0x1b8);
    }
    else if (param_3 == 2) {
      uVar1 = *(undefined4 *)(param_1 + 0x1bc);
    }
    else if (param_3 == 3) {
      uVar1 = *(undefined4 *)(param_1 + 0x1c0);
    }
    goto LAB_0043115e;
  case 2:
    if (3 < param_3) {
      return 0xffffffff;
    }
    uVar1 = 0;
    if (param_4 == (undefined4 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    if (param_3 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x1cc);
    }
    else if (param_3 == 1) {
      uVar1 = *(undefined4 *)(param_1 + 0x1d0);
    }
    else if (param_3 == 2) {
      uVar1 = *(undefined4 *)(param_1 + 0x1d4);
    }
    else if (param_3 == 3) {
      uVar1 = *(undefined4 *)(param_1 + 0x1d8);
    }
LAB_0043115e:
    *param_4 = uVar1;
    return 4;
  case 3:
    if (param_4 == (undefined4 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x1b0);
    goto LAB_0043172f;
  case 4:
    sVar5 = _strlen(*(char **)(param_1 + 0x16c));
    sVar5 = sVar5 + 1;
    if (param_4 == (undefined4 *)0x0) {
      return sVar5;
    }
    if (param_5 < (int)sVar5) {
      return sVar5;
    }
    _Src = *(void **)(param_1 + 0x16c);
    goto LAB_0043185c;
  case 5:
    if (param_4 == (undefined4 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    uVar1 = *(undefined4 *)(param_1 + 0xa8);
    goto LAB_0043187e;
  case 6:
    if (param_4 == (undefined4 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x1a0);
    goto LAB_0043187e;
  case 7:
    if (*(uint *)(param_1 + 0x1a0) <= param_3) {
      return 0xffffffff;
    }
    sVar6 = _strlen(*(char **)(param_3 * 4 + *(int *)(param_1 + 0x1a4)));
    sVar6 = sVar6 + 1;
    if (param_4 == (undefined4 *)0x0) {
      return sVar6;
    }
    if (param_5 < (int)sVar6) {
      return sVar6;
    }
    iVar2 = *(int *)(param_1 + 0x1a4);
    sVar5 = sVar6;
    goto LAB_004312ef;
  case 8:
    if (*(uint *)(param_1 + 0x1a0) <= param_3) {
      return 0xffffffff;
    }
    sVar5 = *(size_t *)(*(int *)(param_1 + 0x1ac) + param_3 * 4);
    sVar6 = sVar5 + 1;
    if (param_4 == (undefined4 *)0x0) {
      return sVar6;
    }
    if (param_5 < (int)sVar6) {
      return sVar6;
    }
    iVar2 = *(int *)(param_1 + 0x1a8);
    goto LAB_00431366;
  case 9:
    if (param_4 == (undefined4 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x170);
    goto LAB_0043187e;
  case 10:
    if (*(int *)(param_1 + 0x170) != 1) {
      return 0xffffffff;
    }
    if (*(uint *)(param_1 + 0x174) <= param_3) {
      return 0xffffffff;
    }
    sVar5 = _strlen(*(char **)(param_3 * 4 + *(int *)(param_1 + 0x184)));
    sVar6 = sVar5 + 1;
    if (param_4 == (undefined4 *)0x0) {
      return sVar6;
    }
    if (param_5 < (int)sVar6) {
      return sVar6;
    }
    iVar2 = *(int *)(param_1 + 0x184);
LAB_004312ef:
    _memcpy(param_4,*(void **)(param_3 * 4 + iVar2),sVar5);
    *(undefined1 *)((sVar6 - 1) + (int)param_4) = 0;
    return sVar6;
  case 0xb:
    if (param_4 == (undefined4 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x194);
    goto LAB_0043187e;
  case 0xc:
    if (*(uint *)(param_1 + 0x194) <= param_3) {
      return 0xffffffff;
    }
    sVar5 = *(size_t *)(*(int *)(param_1 + 0x19c) + param_3 * 4);
    sVar6 = sVar5 + 1;
    if (param_4 == (undefined4 *)0x0) {
      return sVar6;
    }
    if (param_5 < (int)sVar6) {
      return sVar6;
    }
    iVar2 = *(int *)(param_1 + 0x198);
LAB_00431366:
    _memcpy(param_4,*(void **)(iVar2 + param_3 * 4),sVar5);
    *(undefined1 *)((sVar6 - 1) + (int)param_4) = 0;
    return sVar6;
  case 0xd:
    if (param_4 == (undefined4 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0x120);
    break;
  case 0xe:
    if (param_4 == (undefined4 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0x122);
    break;
  case 0xf:
    if (param_4 == (undefined4 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0xb0);
    goto LAB_0043172f;
  case 0x10:
    if (*(byte *)(param_1 + 0xb0) <= param_3) {
      return 0xffffffff;
    }
    if (param_4 == (undefined4 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0xb4 + param_3 * 2);
    break;
  case 0x11:
    if (param_4 == (undefined4 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x11c);
    goto LAB_0043187e;
  case 0x12:
    if (param_4 == (undefined4 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0xb1);
    goto LAB_0043172f;
  case 0x13:
    if (*(byte *)(param_1 + 0xb1) <= param_3) {
      return 0xffffffff;
    }
    if (param_4 == (undefined4 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0xd0 + param_3 * 2);
    break;
  case 0x14:
    if (param_4 == (undefined4 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0xb2);
    goto LAB_0043172f;
  case 0x15:
    if (*(byte *)(param_1 + 0xb2) <= param_3) {
      return 0xffffffff;
    }
    if (param_4 == (undefined4 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0xe4 + param_3 * 2);
    break;
  case 0x16:
    if (param_4 == (undefined4 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0xb3);
    goto LAB_0043172f;
  case 0x17:
    if (*(byte *)(param_1 + 0xb3) <= param_3) {
      return 0xffffffff;
    }
    if (param_4 == (undefined4 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0x100 + param_3 * 2);
    break;
  case 0x18:
    if (param_4 == (undefined4 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x114);
    goto LAB_0043187e;
  case 0x19:
    if (param_4 == (undefined4 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x118);
    goto LAB_0043187e;
  case 0x1a:
    if (param_4 == (undefined4 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x124);
    goto LAB_0043172f;
  case 0x1b:
    if (*(byte *)(param_1 + 0x124) <= param_3) {
      return 0xffffffff;
    }
    if (param_4 == (undefined4 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0x128 + param_3 * 2);
    break;
  case 0x1c:
    if (param_4 == (undefined4 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x125);
    goto LAB_0043172f;
  case 0x1d:
    if (*(byte *)(param_1 + 0x125) <= param_3) {
      return 0xffffffff;
    }
    if (param_4 == (undefined4 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0x142 + param_3 * 2);
    break;
  case 0x1e:
    if (param_4 == (undefined4 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x126);
    goto LAB_0043172f;
  case 0x1f:
    if (param_4 == (undefined4 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x127);
    goto LAB_0043172f;
  case 0x20:
    if (1 < param_3) {
      return 0xffffffff;
    }
    if (param_4 == (undefined4 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0x168 + param_3 * 2);
    break;
  case 0x21:
    if (param_4 == (undefined4 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    uVar1 = *(undefined4 *)(param_1 + 0xac);
    goto LAB_0043187e;
  case 0x22:
    if (param_4 == (undefined4 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x164);
    goto LAB_0043187e;
  case 0x23:
    if (param_4 == (undefined4 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x160);
    goto LAB_0043187e;
  case 0x24:
    sVar5 = _strlen(*(char **)(param_1 + 0x84));
    sVar5 = sVar5 + 1;
    if (param_4 == (undefined4 *)0x0) {
      return sVar5;
    }
    if (param_5 < (int)sVar5) {
      return sVar5;
    }
    _Src = *(void **)(param_1 + 0x84);
    goto LAB_0043185c;
  case 0x25:
    sVar5 = _strlen(*(char **)(param_1 + 0x88));
    sVar5 = sVar5 + 1;
    if (param_4 == (undefined4 *)0x0) {
      return sVar5;
    }
    if (param_5 < (int)sVar5) {
      return sVar5;
    }
    _Src = *(void **)(param_1 + 0x88);
    goto LAB_0043185c;
  case 0x26:
    sVar5 = _strlen(*(char **)(param_1 + 0x8c));
    sVar5 = sVar5 + 1;
    if (param_4 == (undefined4 *)0x0) {
      return sVar5;
    }
    if (param_5 < (int)sVar5) {
      return sVar5;
    }
    _Src = *(void **)(param_1 + 0x8c);
    goto LAB_0043185c;
  case 0x27:
    sVar5 = _strlen(*(char **)(param_1 + 0x90));
    sVar5 = sVar5 + 1;
    if (param_4 == (undefined4 *)0x0) {
      return sVar5;
    }
    if (param_5 < (int)sVar5) {
      return sVar5;
    }
    _Src = *(void **)(param_1 + 0x90);
    goto LAB_0043185c;
  case 0x28:
    sVar5 = _strlen(*(char **)(param_1 + 0x94));
    sVar5 = sVar5 + 1;
    if (param_4 == (undefined4 *)0x0) {
      return sVar5;
    }
    if (param_5 < (int)sVar5) {
      return sVar5;
    }
    _Src = *(void **)(param_1 + 0x94);
LAB_0043185c:
    _memcpy(param_4,_Src,sVar5);
    return sVar5;
  case 0x29:
    if (param_4 == (undefined4 *)0x0) {
      return 1;
    }
    if (param_5 < 1) {
      return 1;
    }
    uVar3 = *(undefined1 *)(param_1 + 0x9c);
LAB_0043172f:
    *(undefined1 *)param_4 = uVar3;
    return 1;
  case 0x2a:
    if (param_4 == (undefined4 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0x9e);
    break;
  case 0x2b:
    if (param_4 == (undefined4 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0xa0);
    break;
  case 0x2c:
    if (param_4 == (undefined4 *)0x0) {
      return 2;
    }
    if (param_5 < 2) {
      return 2;
    }
    uVar4 = *(undefined2 *)(param_1 + 0xa4);
    break;
  case 0x2d:
    if (param_4 == (undefined4 *)0x0) {
      return 4;
    }
    if (param_5 < 4) {
      return 4;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x98);
LAB_0043187e:
    sVar5 = 4;
    *param_4 = uVar1;
  default:
    goto switchD_00431093_default;
  }
  sVar5 = 2;
  *(undefined2 *)param_4 = uVar4;
switchD_00431093_default:
  return sVar5;
}

