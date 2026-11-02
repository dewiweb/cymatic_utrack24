// rea decompile_all
// name: FUN_000e11c4
// address: 0xe11c4
// body: available
// range: 0xe11c4-0xe144f inclusive
// range: 0xe1578-0xe162f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000e11c4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  
  iVar1 = FUN_00077590(param_1,param_2);
  piVar2 = (int *)FUN_00071bd8(iVar1 + 0x1d0);
  iVar1 = DAT_000e1450;
  piVar2[-0x74] = DAT_000e1450;
  piVar2[-0x2e] = iVar1 + 0x98;
  piVar2[-0x2d] = iVar1 + 0xb4;
  piVar2[-0x2c] = iVar1 + 0xdc;
  piVar2[-0x2b] = iVar1 + 0xf4;
  piVar2[-0x2a] = iVar1 + 0x108;
  piVar2[-0x2f] = iVar1 + 0x84;
  piVar2[-0x29] = iVar1 + 0x11c;
  *piVar2 = iVar1 + 0x164;
  *(undefined1 *)(piVar2 + 1) = 0;
  iVar1 = FUN_0006e188(piVar2 + 3,piVar2 + -0x2b,s_Main_UI_Timer_000e1458,DAT_000e1454,DAT_000e1454,
                       DAT_000e1454,DAT_000e1454,DAT_000e1454);
  iVar3 = FUN_001db900(s_SVWHERROR__UIMainControl__HWVS_n_000e1468._0_4_,iVar1 + -4);
  if (iVar3 != 0) {
    FUN_00002898(s_SVWHERROR__UIMainControl__HWVS_n_000e1468 + 4);
    *(undefined4 *)(iVar1 + -4) = 2;
  }
  FUN_00203d74(auStack_30);
  uVar4 = FUN_000b4964();
  iVar3 = FUN_000b4840(uVar4,s_UIService_000e14a0,auStack_30);
  if (iVar3 == 0) {
    FUN_00002898(s_ERROR__UIMainControl__Could_NOT_r_000e14ac);
    thunk_FUN_000b1228(auStack_30);
  }
  else {
    piVar2 = (int *)FUN_0022bc54(auStack_30);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x20))(piVar2);
    if (piVar2 == (int *)0x0) {
      FUN_00002898(s_ERROR__UIMainControl__Could_NOT_r_000e14e4);
      thunk_FUN_000b1228(auStack_30);
    }
    else {
      (**(code **)(*piVar2 + 0xc))(piVar2,400,iVar1 + -0xc0);
      (**(code **)(*piVar2 + 0xc))(piVar2,DAT_000e1520,iVar1 + -0xc0);
      (**(code **)(*piVar2 + 0xc))(piVar2,DAT_000e1524,iVar1 + -0xc0);
      (**(code **)(*piVar2 + 0xc))(piVar2,DAT_000e1528,iVar1 + -0xc0);
      (**(code **)(*piVar2 + 0xc))(piVar2,0x194,iVar1 + -0xc0);
      (**(code **)(*piVar2 + 0xc))(piVar2,DAT_000e152c,iVar1 + -0xc0);
      (**(code **)(*piVar2 + 0xc))(piVar2,DAT_000e1530,iVar1 + -0xc0);
      (**(code **)(*piVar2 + 0xc))(piVar2,DAT_000e1534,iVar1 + -0xc0);
      (**(code **)(*piVar2 + 0xc))(piVar2,0x198,iVar1 + -0xc0);
      (**(code **)(*piVar2 + 0xc))(piVar2,DAT_000e1538,iVar1 + -0xc0);
      uVar4 = FUN_000aa570();
      FUN_000aac2c(uVar4,iVar1 + -0xc0);
      piVar2 = (int *)FUN_0022bc54(auStack_30);
      piVar2 = (int *)(**(code **)(*piVar2 + 0x30))(piVar2);
      if (piVar2 == (int *)0x0) {
        FUN_00002898(s_ERROR__UIMainControl__Could_NOT_r_000e153c);
        thunk_FUN_000b1228(auStack_30);
      }
      else {
        (**(code **)(*piVar2 + 0xc))(piVar2,DAT_000e1630,iVar1 + -0xbc);
        if (1 < *(uint *)(iVar1 + -4)) {
          (**(code **)(*piVar2 + 0x1c))(piVar2,DAT_000e1630,1);
        }
        uVar4 = FUN_000d97d4();
        FUN_000d95e4(uVar4,iVar1 + -200);
        FUN_00203f0c(auStack_3c);
        uVar4 = FUN_000b4964();
        iVar3 = FUN_000b4840(uVar4,s_USBStackService_000e1634,auStack_3c);
        if (iVar3 == 0) {
          FUN_00002898(DAT_000e1644);
        }
        piVar2 = (int *)FUN_0022bc78(auStack_3c);
        (**(code **)(*piVar2 + 0x34))(piVar2,iVar1 + -0xc4);
        FUN_0006f678(iVar1 + -0x1dc);
        FUN_000d0500(auStack_3c);
        thunk_FUN_000b1228(auStack_30);
      }
    }
  }
  return iVar1 + -0x1dc;
}

