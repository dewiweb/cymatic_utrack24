// rea decompile_all
// name: FUN_001738dc
// address: 0x1738dc
// body: available
// range: 0x1738dc-0x173a25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001738dc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined1 auStack_44 [4];
  int *local_40;
  int *local_3c;
  int *local_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  
  piVar1 = DAT_00173a28;
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if (*DAT_00173a28 == 0) {
    piVar8 = DAT_00173a28 + 3;
    puVar3 = (undefined1 *)FUN_00003720(piVar8,0x3a);
    piVar2 = DAT_00173a28;
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0;
      iVar4 = FUN_00002fac(puVar3 + 1,&DAT_00173a38,piVar2 + 1);
      if ((iVar4 != 1) || (piVar1[1] < 1)) {
        piVar1[1] = 1;
      }
    }
    piVar2 = DAT_00173a3c;
    local_3c = DAT_00173a3c;
    if (DAT_00173a3c != (int *)0x0) {
      DAT_00173a3c[1] = 0x200;
      piVar2[2] = 0;
      piVar2[3] = 0;
      local_38 = piVar2 + 4;
      *piVar2 = DAT_00173a40;
      uVar5 = FUN_00232964(&local_40,&DAT_00173a44,auStack_2c);
      iVar4 = FUN_002329b4(local_38,uVar5);
      FUN_002329f0(&local_40);
      *(undefined4 *)(iVar4 + -0x10) = DAT_00173a48;
    }
    piVar2 = DAT_00173a3c;
    uVar5 = FUN_00232964(&local_4c,piVar8,auStack_30);
    uVar6 = FUN_001c1a1c(&local_50);
    iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,uVar5,uVar6);
    piVar1[2] = iVar4;
    if ((local_50 != 0) &&
       (iVar4 = *(int *)(local_50 + 0x1c) + -1, *(int *)(local_50 + 0x1c) = iVar4, iVar4 == 0)) {
      FUN_001c6a64(*(undefined4 *)(local_50 + 0x18));
      FUN_001c6a64(*(undefined4 *)(local_50 + 8));
      FUN_0020bbc0(local_50);
      FUN_001c6a78();
    }
    FUN_002329f0(&local_4c);
    *piVar1 = (int)piVar8;
  }
  iVar4 = local_1c;
  piVar2 = DAT_00173a3c;
  iVar7 = piVar1[2];
  uVar5 = 0;
  if (iVar7 != -1) {
    local_40 = &local_48;
    iVar9 = piVar1[1];
    local_4c = FUN_00232964(auStack_44,&DAT_00173a34,auStack_34);
    local_50 = iVar4;
    (**(code **)(*piVar2 + 0x10))(local_40,piVar2,iVar7,iVar9);
    FUN_002329f0(auStack_44);
    if (*(int *)(local_48 + -4) == 0) {
      FUN_002329f0(&local_48);
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00173882(local_24,local_20,local_48,local_18);
      FUN_002329f0(&local_48);
    }
  }
  return uVar5;
}

