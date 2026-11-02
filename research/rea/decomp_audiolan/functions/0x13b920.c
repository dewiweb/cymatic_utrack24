// rea decompile_all
// name: FUN_0013b920
// address: 0x13b920
// body: available
// range: 0x13b920-0x13bad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0013b920(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [72];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [12];
  
  FUN_0010f5fc(auStack_1c,param_2 + 0x44);
  piVar1 = (int *)FUN_00133e9c(*(int *)(param_1 + 0xdc) + 0x6a8,auStack_1c);
  if ((piVar1 != (int *)0x0) ||
     (piVar1 = (int *)FUN_0011a48c(*(undefined4 *)(param_1 + 0xdc)), piVar1 != (int *)0x0)) {
    FUN_0010f5fc(auStack_28,param_2 + 0x44);
    FUN_0010f650(piVar1 + 0x19,auStack_28);
    piVar1[0x26] = *(int *)(param_2 + 0x24);
    piVar1[0x20] = *(int *)(param_2 + 0x28);
    piVar1[0x22] = *(int *)(param_2 + 0x2c);
    piVar1[0x21] = *(int *)(param_2 + 0x30);
    piVar1[0x23] = *(int *)(param_2 + 0x34);
    piVar1[0x25] = *(int *)(param_2 + 0x38);
    piVar1[0x24] = *(int *)(param_2 + 0x3c);
    FUN_0010f5fc(auStack_28,param_2 + 0x50);
    FUN_0010f650(piVar1 + 0x1d,auStack_28);
    piVar1[0x27] = *(int *)(param_2 + 0x40);
    FUN_0010e770(auStack_30,param_2 + 0x5c);
    FUN_0010e498(piVar1 + 0x2b,auStack_30);
    FUN_0010e7f4(auStack_30);
    FUN_0010e770(auStack_30,param_2 + 100);
    FUN_0010e498(piVar1 + 0x2d,auStack_30);
    FUN_0010e7f4(auStack_30);
    FUN_000f1210(auStack_88,param_2 + 0x6c);
    FUN_0011a06c(piVar1,auStack_40);
    FUN_000f1344(auStack_88);
    FUN_000f1210(auStack_88,param_2 + 0x6c);
    piVar2 = (int *)FUN_0013716c(*(undefined4 *)(param_1 + 0xdc),auStack_88);
    FUN_000f1344(auStack_88);
    if (piVar2 != (int *)0x0) {
      if (*(char *)(param_1 + 0xe0) == '\0') {
        uVar3 = 0x81;
      }
      else {
        uVar3 = 0x85;
      }
      FUN_001416a4(param_1 + 200,1,param_1,uVar3,*(int *)(*piVar1 + -0x14) + (int)piVar1,
                   *(int *)(*piVar2 + -0x14) + (int)piVar2);
      (**(code **)(*piVar2 + 0x3c))(piVar2);
    }
    (**(code **)(*piVar1 + 0x3c))(piVar1);
  }
  FUN_001d3a4c(param_1 + 200,0);
  return;
}

