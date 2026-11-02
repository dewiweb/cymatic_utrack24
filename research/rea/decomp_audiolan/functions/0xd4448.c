// rea decompile_all
// name: FUN_000d4448
// address: 0xd4448
// body: available
// range: 0xd4448-0xd4637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d4448(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *local_88 [4];
  undefined1 local_76;
  byte local_68;
  short local_66 [13];
  short *local_4c;
  undefined4 local_44;
  undefined1 local_40 [8];
  undefined1 auStack_38 [24];
  
  puVar2 = (undefined4 *)FUN_0009b63c();
  uVar3 = (**(code **)*puVar2)();
  local_88[0] = local_40;
  iVar4 = FUN_000ce99c(param_1,uVar3,param_3,&local_44);
  puVar1 = DAT_000d4638;
  if (iVar4 == 0) {
    (**(code **)(**(int **)(param_1 + 0x118) + 0xc))(*(int **)(param_1 + 0x118),param_2,local_40[0])
    ;
    return;
  }
  uVar7 = 0;
  uVar8 = 0;
  while( true ) {
    FUN_000c4d50(local_88,param_1 + 0x14c,uVar3,local_44);
    piVar5 = (int *)FUN_0009b63c();
    iVar4 = (**(code **)(*piVar5 + 8))(piVar5,local_88,0xffffffff);
    if (iVar4 != 0) {
      local_40[0] = local_76;
      FUN_000d7e18(auStack_38,param_1 + 0x14c,uVar3,local_44);
      piVar5 = (int *)FUN_0009b63c();
      iVar4 = (**(code **)(*piVar5 + 8))(piVar5,auStack_38,0xffffffff);
      if (iVar4 != 0) {
        thunk_FUN_000028a4(DAT_000d463c);
      }
      (**(code **)(**(int **)(param_1 + 0x118) + 0xc))
                (*(int **)(param_1 + 0x118),param_2,local_40[0]);
      local_88[0] = puVar1;
      FUN_0019f30c(local_4c);
      return;
    }
    psVar6 = local_4c;
    if (*local_4c == 0) {
      psVar6 = local_66;
    }
    if (*psVar6 == 0) break;
    local_88[0] = puVar1;
    if ((local_68 & 0x10) == 0) {
      uVar7 = uVar7 + 1;
    }
    else {
      uVar8 = uVar8 + 1;
    }
    FUN_0019f30c(local_4c);
  }
  local_88[0] = puVar1;
  FUN_0019f30c(local_4c);
  FUN_000d7e18(local_88,param_1 + 0x14c,uVar3,local_44);
  piVar5 = (int *)FUN_0009b63c();
  iVar4 = (**(code **)(*piVar5 + 8))(piVar5,local_88,0xffffffff);
  if (iVar4 != 0) {
    thunk_FUN_000028a4(DAT_000d463c);
  }
  if (0xffff < uVar8) {
    uVar8 = DAT_000d4640;
  }
  if (0xffff < uVar7) {
    uVar7 = DAT_000d4640;
  }
  (**(code **)(**(int **)(param_1 + 0x118) + 0x24))
            (*(int **)(param_1 + 0x118),param_2,uVar8 & 0xffff,uVar7 & 0xffff);
  return;
}

