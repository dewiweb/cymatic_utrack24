// rea decompile_all
// name: FUN_0013079c
// address: 0x13079c
// body: available
// range: 0x13079c-0x130c63 inclusive
// range: 0x130d40-0x130d63 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0013079c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [12];
  undefined1 auStack_88 [4];
  undefined4 local_84;
  undefined4 local_80;
  undefined1 auStack_7c [88];
  
  FUN_00178f04();
  iVar1 = FUN_001bf37c();
  FUN_000f8ee0();
  uVar2 = FUN_001b9a28();
  FUN_00122480(auStack_7c,uVar2);
  local_80 = FUN_00122460(auStack_7c);
  local_84 = FUN_0012246c(auStack_7c);
  FUN_00090d90(local_80,0);
  iVar3 = FUN_001bab30(auStack_7c);
  if (iVar3 == 0) {
    FUN_00090d98(local_80,0x18);
    FUN_00090da0(local_80,0x18);
  }
  else if (iVar3 == 3) {
    FUN_00090d98(local_80,8);
    FUN_00090da0(local_80,8);
  }
  uVar2 = FUN_0022f354(auStack_88);
  FUN_0023a158(auStack_94,uVar2);
  for (iVar3 = 0; *(int *)(DAT_00130c64 + iVar3 * 4) != 0xff; iVar3 = iVar3 + 1) {
    FUN_0023a0f8(auStack_94,DAT_00130c64 + iVar3 * 4);
  }
  FUN_00090da8(local_80,auStack_94);
  FUN_0023a18c(auStack_94);
  uVar2 = FUN_001b5d88(local_84);
  FUN_00122448(auStack_7c,uVar2);
  uVar2 = FUN_000f8ee0();
  FUN_000f691c(uVar2,auStack_7c);
  iVar3 = FUN_001c6b14(0x34,DAT_00130c68);
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_000f55e8(iVar3,iVar1,8,param_1);
  }
  if (piVar4 == (int *)0x0) {
    FUN_00002898(DAT_00130c6c);
    FUN_00122588(auStack_7c);
    return (int *)0x0;
  }
  iVar3 = (**(code **)(*piVar4 + 8))(piVar4);
  if (iVar3 == 0) {
    FUN_00002898(DAT_00130c70);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    FUN_00122588(auStack_7c);
    return (int *)0x0;
  }
  if (iVar1 != 0) goto LAB_00130d50;
  FUN_00002898(s_C_____>_Custom_flags_are_0x_08x_00130c75 + 3,*_DAT_00130c74);
  uVar2 = FUN_0012246c(auStack_7c);
  FUN_000989d0(auStack_98,uVar2);
  if (*_DAT_00130c74 << 0x1e < 0) {
    FUN_00002898(s______>_Update_mode_00130d22 + 2);
    iVar1 = FUN_001c6b14(0x2c,DAT_00130c68);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00120cf0(iVar1);
    }
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    if (*(int *)(param_1 + 0xc) == 0) {
      FUN_00002898(DAT_00130d38);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      FUN_00098a90(auStack_98);
      FUN_00122588(auStack_7c);
      return (int *)0x0;
    }
    iVar1 = FUN_00120758(*(undefined4 *)(param_1 + 0xc));
    if (iVar1 == 0) {
      FUN_00002898(DAT_00130d3c);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      FUN_00098a90(auStack_98);
      FUN_00122588(auStack_7c);
      return (int *)0x0;
    }
    goto LAB_00130d44;
  }
  piVar5 = (int *)FUN_000f8ee0();
  uVar2 = (**(code **)(*piVar5 + 0x6c))(piVar5);
  switch(uVar2) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    goto LAB_00130a8c;
  case 4:
LAB_00130a8c:
    FUN_00002898(s_______________00130ce4);
    FUN_00002898(s_96kHz_model_00130cf8);
    FUN_00002898(s_______________00130d08);
    iVar1 = FUN_001c6b14(0xce0,DAT_00130c68);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_000f8ee0();
      uVar6 = FUN_000f6910();
      uVar2 = FUN_00114f64(iVar1,piVar4,*(undefined4 *)(param_1 + 0x10),uVar6,0,
                           s_USBModelDynamic_00130cd4,uVar2);
    }
    *(undefined4 *)(param_1 + 4) = uVar2;
    goto LAB_00130b10;
  default:
    *(undefined4 *)(param_1 + 4) = 0;
    goto LAB_00130b10;
  }
  FUN_00002898(s_________________00130c98);
  FUN_00002898(s_Default_model_00130cac);
  FUN_00002898(s_________________00130cc0);
  iVar1 = FUN_001c6b14(0xce0,DAT_00130c68);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_000f8ee0();
    uVar2 = FUN_000f6910();
    uVar2 = FUN_00114f64(iVar1,piVar4,*(undefined4 *)(param_1 + 0x10),uVar2,0,
                         s_USBModelDynamic_00130cd4);
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
LAB_00130b10:
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00002898(DAT_00130d1c);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    FUN_00098a90(auStack_98);
    FUN_00122588(auStack_7c);
    piVar4 = (int *)0x0;
  }
  else {
    iVar1 = FUN_001a85d0(*(undefined4 *)(param_1 + 4));
    if (iVar1 == 0) {
      FUN_00002898(_DAT_00130d20);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      FUN_00098a90(auStack_98);
      FUN_00122588(auStack_7c);
      piVar4 = (int *)0x0;
    }
    else {
LAB_00130d44:
      FUN_00098a90(auStack_98);
LAB_00130d50:
      FUN_00122588(auStack_7c);
    }
  }
  return piVar4;
}

