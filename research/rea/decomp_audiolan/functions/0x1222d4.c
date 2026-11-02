// rea decompile_all
// name: FUN_001222d4
// address: 0x1222d4
// body: available
// range: 0x1222d4-0x122413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001222d4(undefined4 *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [12];
  
  FUN_0010f5fc(auStack_34,param_2 + 0x24);
  FUN_0010f5fc(auStack_40,param_2 + 0x18);
  cVar1 = *(char *)(param_2 + 0x30);
  if (cVar1 == '\x01') {
    uVar3 = FUN_0010f5fc(auStack_1c,auStack_34);
    uVar4 = FUN_0010f5fc(auStack_28,auStack_40);
    FUN_00121430(param_1,uVar4,uVar3,1);
    return;
  }
  piVar2 = (int *)FUN_001d7998(param_1 + 1,auStack_40);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x38))(piVar2);
  }
  if (cVar1 == '\x02') {
    FUN_00147d98(*param_1);
  }
  else {
    if (cVar1 == '\x03') {
      if (piVar2 == (int *)0x0) {
        return;
      }
      FUN_00126d64(piVar2,0,4);
      goto LAB_0012239c;
    }
    if (cVar1 == '\x04') {
      if (piVar2 == (int *)0x0) {
        return;
      }
      FUN_00126d64(piVar2,0,1);
      goto LAB_0012239c;
    }
    if (cVar1 == '\x05') {
      if (piVar2 == (int *)0x0) {
        return;
      }
      FUN_00126d64(piVar2,0,5);
      goto LAB_0012239c;
    }
  }
  if (piVar2 == (int *)0x0) {
    return;
  }
LAB_0012239c:
  (**(code **)(*piVar2 + 0x3c))(piVar2);
  return;
}

