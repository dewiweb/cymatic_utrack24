// rea decompile_all
// name: FUN_00116640
// address: 0x116640
// body: available
// range: 0x116640-0x1168af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00116640(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined1 auStack_7c [60];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  
  (**(code **)(*param_1 + 0xc4))(param_1);
  iVar2 = FUN_00160200(param_1 + 0x10,1);
  iVar3 = FUN_00160200(param_1 + 0x15,1);
  if (iVar2 + iVar3 != 0) {
    uStack_94 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_8c = 0;
    uStack_86 = 0;
    uStack_84 = 0;
    uStack_7e = 0;
    iVar4 = FUN_0010f718(auStack_7c);
    *(undefined1 *)(iVar4 + 0x35) = 1;
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined4 *)(iVar4 + 0x24) = 0;
    FUN_000ee880(iVar4 + -0x1c);
    iVar2 = FUN_000eaaa4(&uStack_98,iVar2 + iVar3);
    if (iVar2 == 0) {
      bVar1 = false;
      uVar5 = 0;
      if ((short)param_1[0x14] != 0) {
        do {
          FUN_00160270(auStack_38,param_1 + 0x10,uVar5);
          auStack_28[0] = 0;
          iVar2 = FUN_0015ea90(auStack_38);
          if ((iVar2 == 0) &&
             ((iVar2 = FUN_0010f544(auStack_38,param_2), iVar2 != 0 ||
              ((iVar2 = FUN_0015e90c(param_2), iVar2 != 0 &&
               (iVar2 = FUN_00160128(param_1 + 0x10,uVar5,auStack_28), iVar2 != 0)))))) {
            FUN_000eaa14(&uStack_98,auStack_38);
            bVar1 = true;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)(param_1 + 0x14));
      }
      uVar5 = 0;
      if ((short)param_1[0x19] != 0) {
        do {
          FUN_00160270(auStack_38,param_1 + 0x15,uVar5);
          auStack_28[0] = 0;
          iVar2 = FUN_0010f544(auStack_38,param_2);
          if ((iVar2 != 0) ||
             ((iVar2 = FUN_0015e90c(param_2), iVar2 != 0 &&
              (iVar2 = FUN_00160128(param_1 + 0x15,uVar5,auStack_28), iVar2 != 0)))) {
            FUN_000eaa14(&uStack_98,auStack_38);
            bVar1 = true;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)(param_1 + 0x19));
      }
      if (bVar1) {
        uVar5 = param_1[0x1a];
        (**(code **)(*(int *)param_1[0x1b] + 0xd4))(auStack_40);
        FUN_0010f674(auStack_30,auStack_40,*(undefined2 *)((int)param_1 + 0xf2));
        FUN_00139890(param_1[9],&uStack_98,auStack_30,~(uVar5 >> 0x19) & 1);
      }
    }
    else {
      (**(code **)(*(int *)param_1[0x1b] + 0xd4))(auStack_40);
      FUN_0012c108(param_1[9] + 0x584,0,auStack_40,*(undefined2 *)((int)param_1 + 0xf2));
    }
    FUN_0017b9f8(2);
    FUN_00129060(param_1[0x1b]);
    FUN_000ee880(&uStack_98);
    FUN_000e9f98(&uStack_84);
    FUN_000e9f98(&uStack_8c);
    return;
  }
  return;
}

