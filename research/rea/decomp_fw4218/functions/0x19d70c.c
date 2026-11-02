// rea decompile_all
// name: FUN_0019d70c
// address: 0x19d70c
// body: available
// range: 0x19d70c-0x19d893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0019d70c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  if (-1 < *(int *)(param_1 + 0x68) << 0x10 && -1 < *(int *)(param_1 + 0x68) << 0xc) {
    return 7;
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    FUN_0017e2ac(&uStack_a8,param_1);
    piVar2 = *(int **)(param_1 + 0x118);
    uVar3 = (**(code **)(*(int *)((int)piVar2 + *(int *)(*piVar2 + -0x38)) + 0x24))
                      ((int)piVar2 + *(int *)(*piVar2 + -0x38));
    FUN_0019bab8(uVar3,param_2,&uStack_a8,param_4);
  }
  iVar4 = FUN_001c004c(param_1 + 0x40,1);
  if (iVar4 != 0) {
    uStack_94 = 0;
    if ((*(ushort *)(param_1 + 0x68) & 0x8000) != 0) {
      param_3 = 0;
    }
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_8c = 0;
    uStack_86 = 0;
    uStack_84 = 0;
    uStack_7e = 0;
    iVar4 = FUN_001727f0(auStack_7c);
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined4 *)(iVar4 + 0x24) = 0;
    *(undefined1 *)(iVar4 + 0x35) = 1;
    FUN_0015111c(iVar4 + -0x1c);
    uVar5 = *(undefined4 *)(param_1 + 0x24);
    uVar1 = *(undefined2 *)(param_1 + 0xf2);
    piVar2 = (int *)FUN_0017e464(param_1);
    (**(code **)(*piVar2 + 0xd4))(auStack_40,piVar2);
    uVar3 = FUN_0017274c(auStack_30,auStack_40,uVar1);
    uStack_9c = 0;
    uStack_a8 = param_2;
    uStack_a4 = param_3;
    uStack_a0 = param_4;
    iVar4 = FUN_00195aec(&uStack_98,uVar3,param_1 + 0x40,uVar5);
    if (iVar4 != 0) {
      FUN_001a2410(*(int *)(param_1 + 0x24) + 0x4a0,&uStack_98,0);
    }
    FUN_0015111c(&uStack_98);
    FUN_0014ca10(&uStack_84);
    FUN_0014ca10(&uStack_8c);
    return 0;
  }
  return 0x15;
}

