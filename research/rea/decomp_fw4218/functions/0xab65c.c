// rea decompile_all
// name: FUN_000ab65c
// address: 0xab65c
// body: available
// range: 0xab65c-0xab863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000ab65c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x60c) = *(undefined4 *)(param_2 + 8);
  local_18 = param_4;
  (**(code **)(**(int **)(param_1 + 0x254) + 0x58))
            (*(int **)(param_1 + 0x254),0,*(uint *)(param_2 + 8) & 0xffff);
  *(undefined4 *)(param_1 + 0x610) = *(undefined4 *)(param_2 + 0x20);
  (**(code **)(**(int **)(param_1 + 0x260) + 0x58))
            (*(int **)(param_1 + 0x260),0,*(uint *)(param_2 + 0x20) & 0xffff);
  *(undefined4 *)(param_1 + 0x614) = *(undefined4 *)(param_2 + 0x1c);
  (**(code **)(**(int **)(param_1 + 600) + 0x58))
            (*(int **)(param_1 + 600),0,*(uint *)(param_2 + 0x1c) & 0xffff);
  *(undefined4 *)(param_1 + 0x618) = *(undefined4 *)(param_2 + 0x18);
  (**(code **)(**(int **)(param_1 + 0x25c) + 0x58))
            (*(int **)(param_1 + 0x25c),0,*(uint *)(param_2 + 0x18) & 0xffff);
  (**(code **)(**(int **)(param_1 + 0x130) + 0x28))();
  FUN_002449c8(param_1 + 0x648,param_2 + 0xc);
  iVar2 = FUN_0022ef74(param_1 + 0x648);
  if (iVar2 == 0) {
    (**(code **)(**(int **)(param_1 + 0x198) + 0x40))(*(int **)(param_1 + 0x198),1);
  }
  else {
    piVar6 = *(int **)(param_1 + 0x198);
    uVar1 = FUN_0022ef74(param_1 + 0x648);
    (**(code **)(*piVar6 + 0x40))(piVar6,uVar1);
  }
  FUN_00244584(param_1 + 0x654);
  for (uVar5 = 0; uVar4 = FUN_0022e2dc(param_2 + 0x24), uVar5 < uVar4; uVar5 = uVar5 + 1) {
    pcVar3 = (char *)FUN_0022e378(param_2 + 0x24,uVar5);
    if (*pcVar3 != '\0') {
      iVar2 = FUN_0022e378(param_2 + 0x24,uVar5);
      local_18 = *(undefined4 *)(iVar2 + 0xc);
      FUN_0024477c(param_1 + 0x654,&local_18);
    }
  }
  iVar2 = FUN_0022ef74(param_1 + 0x654);
  if (iVar2 == 0) {
    (**(code **)(**(int **)(param_1 + 0x194) + 0x40))(*(int **)(param_1 + 0x194),1);
  }
  else {
    piVar6 = *(int **)(param_1 + 0x194);
    uVar1 = FUN_0022ef74(param_1 + 0x654);
    (**(code **)(*piVar6 + 0x40))(piVar6,uVar1);
  }
  FUN_000acd2c(param_1,param_2,param_1 + 0x800);
  (**(code **)(**(int **)(param_1 + 0x130) + 0x2c))();
  return;
}

