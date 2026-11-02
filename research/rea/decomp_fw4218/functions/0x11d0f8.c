// rea decompile_all
// name: FUN_0011d0f8
// address: 0x11d0f8
// body: available
// range: 0x11d0f8-0x11d43b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0011d0f8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  int local_1c;
  
  iStack_28 = param_1;
  uStack_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  FUN_000f4e84();
  uVar2 = FUN_000f5144();
  if (*(int *)(param_1 + 0x9c) == 0) {
    if (*DAT_0011d43c == '\0') {
      iVar3 = FUN_001b6ef4(uVar2);
    }
    else {
      iVar3 = FUN_001b6f00(uVar2);
    }
    if (DAT_0011d444 < *(uint *)(DAT_0011d440 + 0x1c)) {
      if (iVar3 == 0) {
        FUN_001435d0(&iStack_28,DAT_0011d458,DAT_0011d448);
        while( true ) {
          piVar4 = (int *)FUN_000f8ee0();
          iVar3 = (**(code **)(*piVar4 + 0x80))(piVar4,&iStack_28);
          if (iVar3 != 0) break;
          FUN_001d0130(100);
        }
        uVar2 = FUN_00143614(&iStack_28);
      }
      else {
        FUN_001435d0(&iStack_28,DAT_0011d454,DAT_0011d448);
        while( true ) {
          piVar4 = (int *)FUN_000f8ee0();
          iVar3 = (**(code **)(*piVar4 + 0x80))(piVar4,&iStack_28);
          if (iVar3 != 0) break;
          FUN_001d0130(100);
        }
        uVar2 = FUN_00143614(&iStack_28);
      }
    }
    else if (iVar3 == 0) {
      FUN_001435d0(&iStack_28,DAT_0011d450,DAT_0011d448);
      while( true ) {
        piVar4 = (int *)FUN_000f8ee0();
        iVar3 = (**(code **)(*piVar4 + 0x80))(piVar4,&iStack_28);
        if (iVar3 != 0) break;
        FUN_001d0130(100);
      }
      uVar2 = FUN_00143614(&iStack_28);
    }
    else {
      FUN_001435d0(&iStack_28,DAT_0011d44c,DAT_0011d448);
      while( true ) {
        piVar4 = (int *)FUN_000f8ee0();
        iVar3 = (**(code **)(*piVar4 + 0x80))(piVar4,&iStack_28);
        if (iVar3 != 0) break;
        FUN_001d0130(100);
      }
      uVar2 = FUN_00143614(&iStack_28);
    }
    FUN_00069468(uVar2);
    FUN_00069498();
  }
  uVar2 = FUN_000821e8(param_1 + 0x14,DAT_0011d440,DAT_0011d45c);
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  if (*(int *)(param_1 + 0x9c) == 0) {
    *DAT_0011d460 = 0;
    *DAT_0011d464 = 1;
    *DAT_0011d468 = 1;
    if (*(char *)(param_1 + 0x98) == '\0') {
      if (*_DAT_0011d46c != 0) {
        local_20 = 0;
        iVar3 = (**(code **)(*(int *)(param_1 + 0x14) + 0x24))
                          (param_1 + 0x14,&local_1c,&local_20,*_DAT_0011d46c);
        if (iVar3 == 0) {
          FUN_00002898(s____ERROR__Could_not_get_Sample_a_0011d46d + 3,*_DAT_0011d46c);
        }
        else {
          if (local_1c == 1) {
            uVar1 = 0;
          }
          else {
            puVar5 = (undefined4 *)FUN_00244c00(DAT_0011d4b0,local_1c + -2);
            uVar1 = *puVar5;
          }
          *DAT_0011d460 = uVar1;
          FUN_00085698(param_1 + 0x14,local_1c,local_20,
                       *(int *)(DAT_0011d440 + 0x1c) * *_DAT_0011d46c);
        }
      }
      uVar1 = FUN_0011ca94(param_1);
    }
    else {
      if (*(int *)(param_1 + 0x9c) == 0) {
        FUN_000950d0(uVar1,1);
        if (*(char *)(param_1 + 0x99) != '\0') {
          FUN_000f4e84();
          uVar2 = FUN_000f4fb4();
          FUN_0006de4c(uVar2,1);
        }
        FUN_00093c78(uVar1,1);
        FUN_001a48f0(param_1,0x25,0);
      }
      uVar1 = 1;
    }
  }
  else {
    FUN_0011cde8(param_1,*(undefined4 *)(param_1 + 0x9c));
    uVar1 = 0;
  }
  return uVar1;
}

