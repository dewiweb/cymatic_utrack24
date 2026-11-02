// rea decompile_all
// name: FUN_00142128
// address: 0x142128
// body: available
// range: 0x142128-0x142383 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00142128(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  iVar2 = param_1[9];
  uVar5 = *(uint *)(iVar2 + 0x5f0);
  *(uint *)(iVar2 + 0x5f0) = uVar5 + 1;
  *(uint *)(iVar2 + 0x5f4) = *(int *)(iVar2 + 0x5f4) + (uint)(0xfffffffe < uVar5);
  cVar1 = *(char *)((int)param_2 + 0x6d);
  if (cVar1 == '\0') {
    FUN_001179e0(param_1);
    (**(code **)(*param_2 + 0x6c))(auStack_58,param_2);
    FUN_0012e3a4(param_1 + 0x1a,auStack_58);
    (**(code **)(*param_2 + 0x6c))(auStack_58,param_2);
    iVar2 = FUN_00132ec8(param_1 + 0x15,auStack_58,auStack_5c);
    if (iVar2 == 0) {
      FUN_001179d0(param_1);
      return;
    }
    (**(code **)(*param_2 + 0x6c))(auStack_28,param_2);
    FUN_00141a84(param_1,auStack_28);
    FUN_001179d0(param_1);
    *(undefined1 *)((int)param_1 + 0xeb) = 1;
    uVar5 = 0;
    while( true ) {
      if (*(ushort *)(param_1 + 0x23) <= uVar5) {
        return;
      }
      puVar4 = *(undefined4 **)(param_1[0x22] + uVar5 * 4);
      if (puVar4 == (undefined4 *)0x0) break;
      (**(code **)(*param_2 + 0x6c))(auStack_38,param_2);
      (**(code **)*puVar4)(puVar4,*(int *)(*param_1 + -0x14) + (int)param_1,auStack_38,1);
      uVar5 = uVar5 + 1 & 0xfffeffff;
    }
    return;
  }
  if (cVar1 == '\x06') {
    (**(code **)(*param_2 + 0x6c))(auStack_48,param_2);
    iVar2 = FUN_0012ea14(param_1 + 0x1a,auStack_48);
    if (iVar2 != 0) {
      uVar5 = 0;
      while ((uVar5 < *(ushort *)(param_1 + 0x23) &&
             (puVar4 = *(undefined4 **)(param_1[0x22] + uVar5 * 4), puVar4 != (undefined4 *)0x0))) {
        (**(code **)*puVar4)(puVar4,*(int *)(*param_1 + -0x14) + (int)param_1,auStack_48,0);
        uVar5 = uVar5 + 1 & 0xfffeffff;
      }
    }
    FUN_00132900(param_1 + 0x15,auStack_48);
    return;
  }
  if (cVar1 != 'F') {
    return;
  }
  cVar1 = *(char *)((int)param_1 + 0xed);
  if ((cVar1 != '\0') && (*(char *)((int)param_1 + 0xed) = cVar1 + -1, cVar1 != '\x01')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x3b) = 0;
  uVar5 = 0;
  while( true ) {
    if (*(ushort *)(param_1 + 0x23) <= uVar5) {
      return;
    }
    piVar3 = *(int **)(param_1[0x22] + uVar5 * 4);
    if (piVar3 == (int *)0x0) break;
    (**(code **)(*piVar3 + 4))(piVar3,*(int *)(*param_1 + -0x14) + (int)param_1);
    uVar5 = uVar5 + 1 & 0xfffeffff;
  }
  return;
}

