// rea decompile_all
// name: FUN_001db2e4
// address: 0x1db2e4
// body: available
// range: 0x1db2e4-0x1db4df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001db2e4(uint *param_1,int param_2,int *param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int **ppiVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  bool bVar10;
  int *local_30;
  int *local_2c [2];
  
  iVar3 = 1;
  pcVar1 = *(char **)(param_2 + 0x10);
  pcVar7 = *(char **)(*(char **)(param_2 + 0x10) + 4);
  while (pcVar7 != (char *)0x0) {
    uVar5 = *(uint *)(*(int *)(pcVar7 + 0x10) + -4);
    uVar4 = *(uint *)(*param_3 + -4);
    if (uVar4 <= uVar5) {
      uVar5 = uVar4;
    }
    uVar5 = FUN_0000339c(*param_3,*(int *)(pcVar7 + 0x10),uVar5);
    if (uVar5 == 0) {
      uVar5 = *(uint *)(*param_3 + -4);
      uVar4 = *(uint *)(*(int *)(pcVar7 + 0x10) + -4);
      bVar10 = uVar5 < uVar4;
      bVar9 = uVar5 == uVar4;
      if (bVar9) {
        uVar5 = 0;
      }
      if (!bVar10 && !bVar9) {
        uVar5 = 0;
      }
      if (bVar10) {
        uVar5 = 0xffffffff;
      }
    }
    iVar3 = -((int)uVar5 >> 0x1f);
    pcVar1 = pcVar7;
    if (iVar3 == 0) {
      pcVar7 = *(char **)(pcVar7 + 0xc);
    }
    else {
      pcVar7 = *(char **)(pcVar7 + 8);
    }
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    pcVar7 = pcVar1;
    if (iVar3 != 0) {
      if (pcVar1 == *(char **)(*(int *)(param_2 + 0x10) + 8)) {
        local_30 = param_3;
        FUN_001c8140(local_2c,param_2,0,pcVar1);
        *param_1 = (uint)local_2c[0];
        *(undefined1 *)(param_1 + 1) = 1;
        return;
      }
      if ((*pcVar1 == '\0') && (*(char **)(*(int *)(pcVar1 + 4) + 4) == pcVar1)) {
        pcVar7 = *(char **)(pcVar1 + 0xc);
      }
      else {
        pcVar2 = *(char **)(pcVar1 + 8);
        if (*(char **)(pcVar1 + 8) == (char *)0x0) {
          pcVar2 = *(char **)(pcVar1 + 4);
          pcVar8 = pcVar1;
          while (pcVar7 = pcVar2, pcVar8 == *(char **)(pcVar7 + 8)) {
            pcVar8 = pcVar7;
            pcVar2 = *(char **)(pcVar7 + 4);
          }
        }
        else {
          do {
            pcVar7 = pcVar2;
            pcVar2 = *(char **)(pcVar7 + 0xc);
          } while (*(char **)(pcVar7 + 0xc) != (char *)0x0);
        }
      }
    }
    local_30 = *(int **)(*(int *)(pcVar7 + 0x10) + -4);
    local_2c[0] = *(int **)(*param_3 + -4);
    ppiVar6 = &local_30;
    if (*(int **)(*param_3 + -4) < local_30) {
      ppiVar6 = local_2c;
    }
    iVar3 = FUN_0000339c(*(int *)(pcVar7 + 0x10),*param_3,*ppiVar6);
    if (iVar3 == 0) {
      if (*(uint *)(*param_3 + -4) <= *(uint *)(*(int *)(pcVar7 + 0x10) + -4)) goto LAB_001db4b0;
    }
    else if (-1 < iVar3) {
LAB_001db4b0:
      *param_1 = (uint)pcVar7;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  local_30 = param_3;
  FUN_001c8140(local_2c,param_2,0,pcVar1);
  *param_1 = (uint)local_2c[0];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

