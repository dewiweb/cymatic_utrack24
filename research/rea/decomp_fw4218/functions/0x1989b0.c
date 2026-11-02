// rea decompile_all
// name: FUN_001989b0
// address: 0x1989b0
// body: available
// range: 0x1989b0-0x198bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001989b0(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined2 local_7e;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined1 auStack_74 [60];
  undefined1 auStack_38 [12];
  int *piStack_2c;
  undefined4 local_28;
  
  uVar2 = 0;
  uVar3 = 0xffffffff;
  piStack_2c = param_1;
  local_28 = param_2;
  if ((short)param_1[1] != 0) {
    do {
      if (*(short *)(*param_1 + uVar2 * 0x10 + 0xc) == 0) {
        if ((int)uVar3 < 0) {
          uVar3 = (uint)(short)uVar2;
        }
      }
      else {
        iVar1 = FUN_001bed7c(*param_1 + uVar2 * 0x10,local_28);
        if (iVar1 != 0) {
          iVar1 = uVar2 * 0x10 + 0xc;
          *(short *)(*param_1 + iVar1) = *(short *)(*param_1 + iVar1) + 1;
          return uVar2;
        }
      }
      uVar2 = uVar2 + 1 & 0xfffeffff;
    } while (uVar2 < *(ushort *)(param_1 + 1));
    if (-1 < (int)uVar3) {
      uVar2 = uVar3 & 0xffff;
      FUN_00172728(*param_1 + uVar2 * 0x10,local_28);
      *(undefined2 *)(*param_1 + uVar2 * 0x10 + 0xc) = 1;
      *(undefined1 *)(*param_1 + uVar2 * 0x10 + 0xf) = 0;
      *(undefined1 *)(*param_1 + uVar2 * 0x10 + 0xe) = 2;
      goto LAB_00198ae8;
    }
  }
  FUN_001987a4(param_1,(short)param_1[1] + *(short *)((int)param_1 + 6));
  FUN_00172728(*param_1 + uVar2 * 0x10,local_28);
  *(undefined2 *)(*param_1 + uVar2 * 0x10 + 0xc) = 1;
  *(undefined1 *)(*param_1 + uVar2 * 0x10 + 0xf) = 0;
  *(undefined1 *)(*param_1 + uVar2 * 0x10 + 0xe) = 2;
LAB_00198ae8:
  local_8c = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_84 = 0;
  local_7e = 0;
  local_7c = 0;
  local_76 = 0;
  iVar1 = FUN_001727f0(auStack_74);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined1 *)(iVar1 + 0x35) = 1;
  FUN_0015111c(iVar1 + -0x1c);
  (**(code **)(*(int *)param_1[2] + 0xd4))(auStack_38);
  FUN_00150260(&local_90,0,auStack_38,local_28,DAT_00198bc8,0,0,0,0,DAT_00198bc4,DAT_00198bc0);
  FUN_001a2410(**(int **)(param_1[2] + 0x7c) + 0x4a0,&local_90,0);
  FUN_0015111c(&local_90);
  FUN_0014ca10(&local_7c);
  FUN_0014ca10(&local_84);
  return uVar2;
}

