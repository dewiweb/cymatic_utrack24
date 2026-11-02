// rea decompile_all
// name: FUN_000accb4
// address: 0xaccb4
// body: available
// range: 0xaccb4-0xad083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000ace80) */
/* WARNING: Removing unreachable block (ram,0x000ace98) */
/* WARNING: Removing unreachable block (ram,0x000acea0) */
/* WARNING: Removing unreachable block (ram,0x000ace34) */
/* WARNING: Removing unreachable block (ram,0x000ace4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000accb4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined4 *puStack_28;
  
  uVar2 = DAT_000ad088;
  uVar1 = DAT_000ad084;
  while( true ) {
    iVar3 = FUN_00068100(param_1,0xffffffff);
    if (iVar3 == 0) {
      return;
    }
    FUN_000cc020(param_1 + 0xdc);
    iVar3 = *(int *)(param_1 + 0xc0);
    FUN_001a0700(_DAT_000ad08c);
    piVar4 = *(int **)(iVar3 + 0xc0);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc0))(piVar4);
    }
    FUN_001a0d18(_DAT_000ad08c);
    if (piVar4 == (int *)0x0) {
      FUN_000028a4(s_A_ERROR__DSPStreaming_Custom__do_000ad08e + 2);
      FUN_001a0700(_DAT_000ad08c);
      goto LAB_000acf6c;
    }
    iVar3 = *(int *)(param_1 + 0xc0);
    FUN_001a0700(_DAT_000ad08c);
    piVar5 = *(int **)(iVar3 + 200);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc0))(piVar5);
    }
    FUN_001a0d18(_DAT_000ad08c);
    if (piVar5 == (int *)0x0) break;
    iVar3 = *(int *)(*(int *)(param_1 + 0xc0) + 0xe8);
    if (iVar3 == 0) {
      FUN_000028a4(DAT_000ad0d4);
      FUN_001a0700(_DAT_000ad08c);
      if (((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 0xc4))(piVar5), iVar3 == 0)) &&
         (piVar5 != (int *)0x0)) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      FUN_001a0d18(_DAT_000ad08c);
      FUN_001a0700(_DAT_000ad08c);
      if (piVar4 == (int *)0x0) goto LAB_000acf6c;
      iVar3 = (**(code **)(*piVar4 + 0xc4))(piVar4);
      goto joined_r0x000acedc;
    }
    uStack_30 = uVar1;
    FUN_001a0700(_DAT_000ad08c);
    piStack_2c = piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0xc0))();
    }
    FUN_001a0d18(_DAT_000ad08c);
    uStack_38 = uVar2;
    puStack_28 = &uStack_30;
    FUN_001a0700(_DAT_000ad08c);
    piStack_34 = piVar4;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc0))();
    }
    FUN_001a0d18(_DAT_000ad08c);
    FUN_00011f4c(param_1,&uStack_38,puStack_28,iVar3);
    uStack_38 = uVar2;
    FUN_001a0700(_DAT_000ad08c);
    if (piStack_34 != (int *)0x0) {
      iVar3 = (**(code **)(*piStack_34 + 0xc4))();
      if ((iVar3 == 0) && (piStack_34 != (int *)0x0)) {
        (**(code **)(*piStack_34 + 4))();
      }
      piStack_34 = (int *)0x0;
    }
    FUN_001a0d18(_DAT_000ad08c);
    uStack_30 = uVar1;
    FUN_001a0700(_DAT_000ad08c);
    if (piStack_2c != (int *)0x0) {
      iVar3 = (**(code **)(*piStack_2c + 0xc4))();
      if ((iVar3 == 0) && (piStack_2c != (int *)0x0)) {
        (**(code **)(*piStack_2c + 4))();
      }
      piStack_2c = (int *)0x0;
    }
    FUN_001a0d18(_DAT_000ad08c);
    FUN_001a0700(_DAT_000ad08c);
    if (((piVar5 != (int *)0x0) && (iVar3 = (**(code **)(*piVar5 + 0xc4))(piVar5), iVar3 == 0)) &&
       (piVar5 != (int *)0x0)) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    FUN_001a0d18(_DAT_000ad08c);
    FUN_001a0700(_DAT_000ad08c);
    if (((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 0xc4))(piVar4), iVar3 == 0)) &&
       (piVar4 != (int *)0x0)) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    FUN_001a0d18(_DAT_000ad08c);
  }
  FUN_000028a4(DAT_000ad0d0);
  FUN_001a0700(_DAT_000ad08c);
  FUN_001a0d18(_DAT_000ad08c);
  FUN_001a0700(_DAT_000ad08c);
  if (piVar4 == (int *)0x0) goto LAB_000acf6c;
  iVar3 = (**(code **)(*piVar4 + 0xc4))(piVar4);
joined_r0x000acedc:
  if ((iVar3 == 0) && (piVar4 != (int *)0x0)) {
    (**(code **)(*piVar4 + 4))(piVar4);
  }
LAB_000acf6c:
  FUN_001a0d18(_DAT_000ad08c);
  return;
}

