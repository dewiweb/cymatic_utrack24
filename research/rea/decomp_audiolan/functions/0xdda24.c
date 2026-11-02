// rea decompile_all
// name: FUN_000dda24
// address: 0xdda24
// body: available
// range: 0xdda24-0xddc77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_000dda24(undefined4 *param_1,uint param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  char *local_4c;
  char *local_48;
  undefined1 local_44;
  uint local_40;
  int *piStack_3c;
  undefined4 *puStack_34;
  uint uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  
  piVar4 = (int *)*param_1;
  puStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  (**(code **)(*piVar4 + 0x28))();
  if (param_2 == 0) {
LAB_000ddab4:
    (**(code **)(*piVar4 + 0x2c))(piVar4);
    return 0;
  }
  iVar5 = param_1[5];
  iVar8 = iVar5;
  iVar1 = *(int *)(iVar5 + 4);
  while (iVar1 != 0) {
    if (*(uint *)(iVar1 + 0x10) < param_2) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar8 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if ((iVar8 != iVar5) && (*(uint *)(iVar8 + 0x10) <= param_2)) {
    iVar5 = iVar8;
  }
  if (iVar5 != param_1[5]) goto LAB_000ddab4;
  if ((param_4 == 0) || (0x20 < param_4)) {
    param_4 = 0x20;
  }
  piStack_3c = (int *)FUN_001a0808(0x1c,1);
  if (piStack_3c == (int *)0x0) goto LAB_000ddab4;
  iVar8 = DAT_000ddc78 + 0x18;
  *piStack_3c = DAT_000ddc78;
  piStack_3c[1] = iVar8;
  piStack_3c[2] = 0;
  piStack_3c[3] = 0;
  *(undefined1 *)(piStack_3c + 4) = 0;
  piStack_3c[5] = 0;
  piStack_3c[6] = 0;
  uVar12 = FUN_000679bc(piStack_3c,param_2,local_2c,param_4,param_5);
  if ((int)uVar12 == 0) {
    (**(code **)(*piStack_3c + 8))(piStack_3c);
    goto LAB_000ddab4;
  }
  pcVar6 = (char *)param_1[5];
  bVar10 = *(char **)(pcVar6 + 4) != (char *)0x0;
  uVar7 = (uint)((ulonglong)uVar12 >> 0x20);
  if (bVar10) {
    uVar7 = param_2;
  }
  bVar11 = true;
  pcVar2 = pcVar6;
  pcVar3 = *(char **)(pcVar6 + 4);
  while (bVar10) {
    bVar11 = uVar7 < *(uint *)(pcVar3 + 0x10);
    if (bVar11) {
      pcVar9 = *(char **)(pcVar3 + 8);
    }
    else {
      pcVar9 = *(char **)(pcVar3 + 0xc);
    }
    bVar10 = pcVar9 != (char *)0x0;
    pcVar2 = pcVar3;
    pcVar3 = pcVar9;
  }
  local_40 = param_2;
  if (*(char *)(param_1 + 7) == '\0') {
    local_48 = pcVar2;
    if (bVar11) {
      if (pcVar2 == *(char **)(pcVar6 + 8)) goto LAB_000ddbac;
      if ((*pcVar2 == '\0') && (*(char **)(*(int *)(pcVar2 + 4) + 4) == pcVar2)) {
        local_48 = *(char **)(pcVar2 + 0xc);
      }
      else {
        pcVar6 = *(char **)(pcVar2 + 8);
        if (*(char **)(pcVar2 + 8) == (char *)0x0) {
          pcVar6 = *(char **)(pcVar2 + 4);
          pcVar9 = pcVar2;
          while (local_48 = pcVar6, pcVar9 == *(char **)(local_48 + 8)) {
            pcVar9 = local_48;
            pcVar6 = *(char **)(local_48 + 4);
          }
        }
        else {
          do {
            local_48 = pcVar6;
            pcVar6 = *(char **)(local_48 + 0xc);
          } while (*(char **)(local_48 + 0xc) != (char *)0x0);
        }
      }
    }
    if (param_2 <= *(uint *)(local_48 + 0x10)) {
      local_44 = 0;
      goto LAB_000ddbc8;
    }
  }
LAB_000ddbac:
  FUN_001c5668(&local_4c,param_1 + 1,pcVar3,pcVar2,&local_40);
  local_48 = local_4c;
  local_44 = 1;
LAB_000ddbc8:
  (**(code **)(*piVar4 + 0x2c))(piVar4);
  return 1;
}

