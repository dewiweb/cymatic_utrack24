// rea decompile_all
// name: FUN_000550c0
// address: 0x550c0
// body: available
// range: 0x550c0-0x552fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000550c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int local_1c;
  int local_18;
  
  if (param_1[0x4c] != 0) {
    FUN_0019d660();
    param_1[0x4c] = 0;
  }
  if (param_1[0x4d] != 0) {
    FUN_0019d1bc();
    param_1[0x4d] = 0;
  }
  local_18 = param_1[0x44];
  iVar1 = FUN_000b9aac();
  *(undefined2 *)((int)param_1 + 0x11a) = *(undefined2 *)(iVar1 + 600);
  *(undefined2 *)(param_1 + 0x46) = *(undefined2 *)(iVar1 + 0x25a);
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(iVar1 + 0x25c);
  *(undefined1 *)((int)param_1 + 0x125) = *(undefined1 *)(iVar1 + 0x25d);
  FUN_00159d84(&local_1c);
  FUN_0018e28c(local_1c,param_1 + 0x45);
  if (local_1c != DAT_000552fc) {
    piVar2 = (int *)(local_1c + -0xc);
    iVar1 = *piVar2;
    if ((iVar1 == -1) || ((piVar2 != DAT_00055300 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
      FUN_0010fa20(local_1c + -0xc,*(int *)(local_1c + -8) + 0xe,0);
    }
  }
  if (*(char *)((int)param_1 + 0x125) == '\0') {
    piVar2 = (int *)param_1[0x4b];
    if (piVar2 == (int *)0x0) goto LAB_00055264;
    param_1[0x4b] = 0;
    (**(code **)(*piVar2 + 0x10))(piVar2);
    FUN_00154c18(piVar2,0xffffffff);
    (**(code **)(*param_1 + 0x1c))(param_1,500);
    pcVar4 = *(code **)(*piVar2 + 4);
  }
  else {
    if (param_1[0x4b] != 0) {
      FUN_00063a1c(param_1[0x4b],&local_18,param_1 + 0x45,*(undefined2 *)((int)param_1 + 0x11a));
      goto LAB_00055264;
    }
    iVar3 = FUN_001a0808(0x118,1);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = FUN_00063a44(iVar3,param_1 + 0x30);
    }
    param_1[0x4b] = iVar1;
    if (iVar1 == 0) {
      return;
    }
    FUN_00063a1c(iVar1,&local_18,param_1 + 0x45,*(undefined2 *)((int)param_1 + 0x11a));
    piVar2 = (int *)param_1[0x4b];
    pcVar4 = *(code **)(*piVar2 + 8);
  }
  (*pcVar4)(piVar2);
LAB_00055264:
  iVar1 = FUN_0019dc00(0x22,0);
  param_1[0x4c] = iVar1;
  if (iVar1 != 0) {
    FUN_0019d4b4(iVar1,DAT_00055304,0);
    iVar1 = FUN_0019d264();
    param_1[0x4d] = iVar1;
  }
  iVar1 = param_1[0x44];
  FUN_001a0700(param_1 + 0x32);
  piVar2 = *(int **)param_1[0x52];
  if (piVar2 != (int *)param_1[0x52]) {
    do {
      if (*(int *)(piVar2[2] + 4) != iVar1) {
        *(undefined4 *)(piVar2[2] + 0x1c) = 1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)param_1[0x52]);
  }
  FUN_001a0d18(param_1 + 0x32);
  return;
}

