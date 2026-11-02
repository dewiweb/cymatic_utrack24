// rea decompile_all
// name: FUN_0011bd24
// address: 0x11bd24
// body: available
// range: 0x11bd24-0x11be65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0011bd24(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined1 auStack_38 [16];
  int local_28;
  int *local_24;
  undefined1 auStack_20 [12];
  
  local_44 = 0xffffffff;
  local_48 = (int *)0x0;
  local_40 = 0xffffffff;
  FUN_001387bc(&local_48);
  uVar1 = FUN_00201f28(auStack_20,0);
  FUN_001aaefc(auStack_38,uVar1);
  FUN_00201f54(auStack_20);
  local_28 = 1;
  while( true ) {
    uVar1 = DAT_0011be68;
    if (local_48 != (int *)0x0) {
      uVar1 = (**(code **)(*local_48 + 0xc))();
    }
    piVar5 = local_48;
    uVar2 = DAT_0011be6c;
    if (local_48 == (int *)0x0) goto LAB_0011bdd6;
    FUN_001f00bc(DAT_0011be6c);
    local_3c = (uint)piVar5 & 0xffffff00 | 1;
    piVar5 = (int *)local_48[0xb];
    if (piVar5 == (int *)0x0) break;
    local_24 = local_48;
    local_28 = uVar2;
    FUN_001f00bc(uVar2);
    piVar5[0xc] = piVar5[0xc] + 1;
    FUN_001f06d4(local_28);
    FUN_000f0fa8(local_48);
    local_48 = piVar5;
    if ((local_3c & 0xff) != 0) {
      FUN_001f06d4(uVar2);
    }
    FUN_001ab1a2(auStack_38,uVar1);
    local_28 = 0;
  }
  FUN_001f06d4(uVar2);
LAB_0011bdd6:
  uVar1 = DAT_0011be6c;
  if (local_28 == 0) {
    FUN_001f00bc(DAT_0011be6c);
    puVar4 = *(undefined4 **)(param_1 + 0x14);
    if (*(undefined4 **)(param_1 + 0x18) != puVar4) {
      do {
        uVar2 = (*(code *)**(undefined4 **)*puVar4)();
        iVar3 = FUN_001c0b0c(uVar2,auStack_38);
        if (iVar3 != 0) {
          uVar2 = *puVar4;
          FUN_001f06d4(uVar1);
          FUN_001aafac(auStack_38);
          if (local_48 != (int *)0x0) {
            FUN_000f0fa8();
          }
          return uVar2;
        }
        puVar4 = puVar4 + 1;
      } while (*(undefined4 **)(param_1 + 0x18) != puVar4);
    }
    FUN_001f06d4(uVar1);
    FUN_001aafac(auStack_38);
  }
  else {
    FUN_001aafac(auStack_38);
  }
  if (local_48 != (int *)0x0) {
    FUN_000f0fa8();
  }
  return 0;
}

