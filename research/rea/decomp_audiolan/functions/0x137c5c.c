// rea decompile_all
// name: FUN_00137c5c
// address: 0x137c5c
// body: available
// range: 0x137c5c-0x137e9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x137cd4 to 0xfb8bc FUN_000fb8bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00137c5c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [16];
  
  if (*(char *)(param_2 + 0x10) == '\x19') {
    FUN_0010f5fc(auStack_28,param_2 + 0x44);
    piVar2 = (int *)FUN_00133e9c(*(int *)(param_1 + 0x74) + 0x6a8,auStack_28);
    if ((piVar2 != (int *)0x0) ||
       (piVar2 = (int *)FUN_0011a48c(*(undefined4 *)(param_1 + 0x74)), piVar2 != (int *)0x0)) {
      FUN_0010f5fc(auStack_40,param_2 + 0x44);
      FUN_0010f650(piVar2 + 0x19,auStack_40);
      piVar2[0x26] = *(int *)(param_2 + 0x24);
      piVar2[0x20] = *(int *)(param_2 + 0x28);
      piVar2[0x22] = *(int *)(param_2 + 0x2c);
      piVar2[0x21] = *(int *)(param_2 + 0x30);
      piVar2[0x23] = *(int *)(param_2 + 0x34);
      piVar2[0x25] = *(int *)(param_2 + 0x38);
      piVar2[0x24] = *(int *)(param_2 + 0x3c);
      FUN_0010f5fc(auStack_40,param_2 + 0x50);
      FUN_0010f650(piVar2 + 0x1d,auStack_40);
      piVar2[0x27] = *(int *)(param_2 + 0x40);
      FUN_0010e770(auStack_30,param_2 + 0x5c);
      FUN_0010e498(piVar2 + 0x2b,auStack_30);
      FUN_0010e7f4(auStack_30);
      FUN_0010e770(auStack_30,param_2 + 100);
      FUN_0010e498(piVar2 + 0x2d,auStack_30);
      FUN_0010e7f4(auStack_30);
      FUN_0011a06c(piVar2,param_2 + 0x6c);
      *(byte *)(piVar2 + 0x32) = *(byte *)(piVar2 + 0x32) | 1;
      FUN_0010f5fc(auStack_40,param_2 + 0x44);
      FUN_0010f650(param_1 + 0x88,auStack_40);
      FUN_000ea348(param_1 + 0xd8,param_2 + 0x6c);
      piVar3 = (int *)FUN_00137288(*(undefined4 *)(param_1 + 0x74),param_1 + 0x78);
      if (piVar3 != (int *)0x0) {
        if (*(char *)(param_1 + 0xe5) == '\0') {
          uVar5 = 0x81;
        }
        else {
          uVar5 = 0x85;
        }
        FUN_001416a4(param_1 + 0x60,1,param_1,uVar5,*(int *)(*piVar2 + -0x14) + (int)piVar2,
                     *(int *)(*piVar3 + -0x14) + (int)piVar3);
        (**(code **)(*piVar3 + 0x3c))(piVar3);
      }
      (**(code **)(*piVar2 + 0x3c))(piVar2);
    }
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == 0) goto LAB_00137cc4;
    iVar4 = *(int *)(iVar1 + 0xc) + -1;
    *(int *)(iVar1 + 0xc) = iVar4;
    iVar1 = *(int *)(param_1 + 0x70);
  }
  else {
    if (*(char *)(param_1 + 0xe5) == '\0') {
      uVar5 = 0x80;
    }
    else {
      uVar5 = 0x86;
    }
    FUN_001416a4(param_1 + 0x60,1,param_1,uVar5,0,0);
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == 0) goto LAB_00137cc4;
    iVar4 = *(int *)(iVar1 + 0xc) + -1;
    *(int *)(iVar1 + 0xc) = iVar4;
    iVar1 = *(int *)(param_1 + 0x70);
  }
  if (iVar4 == 0) {
    *(undefined4 *)(iVar1 + 4) = 0;
  }
LAB_00137cc4:
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_000fb8bc(param_1);
  return;
}

