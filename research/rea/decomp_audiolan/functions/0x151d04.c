// rea decompile_all
// name: FUN_00151d04
// address: 0x151d04
// body: available
// range: 0x151d04-0x151e69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00151db6) */

int * FUN_00151d04(int param_1,int *param_2,int *param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int **ppiVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int *local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int *piStack_20;
  int *piStack_1c;
  int local_18;
  
  local_24 = param_1;
  piStack_20 = param_2;
  piStack_1c = param_3;
  local_18 = param_4;
  piVar2 = (int *)FUN_001a0808(0xc,1);
  if (piVar2 != (int *)0x0) {
    local_28 = param_5;
    local_2c = local_18;
    local_38 = param_2;
    piVar3 = (int *)FUN_000034d0(param_2);
    iVar6 = DAT_00151e6c;
    iVar5 = DAT_00151e6c;
    if (piVar3 != (int *)0x0) {
      local_30 = (int *)0x80;
      ppiVar4 = &local_30;
      local_34 = piVar3;
      if ((int *)0x80 < piVar3) {
        ppiVar4 = &local_34;
      }
      iVar5 = FUN_001da28c(piVar2,*ppiVar4,piVar3);
      iVar5 = iVar5 + 0xc;
    }
    *piVar2 = iVar5;
    FUN_00003628(iVar5,local_38,piVar3);
    local_34 = param_3;
    piVar3 = (int *)FUN_000034d0(param_3);
    iVar5 = iVar6;
    if (piVar3 != (int *)0x0) {
      local_30 = (int *)0x80;
      local_38 = piVar3;
      ppiVar4 = &local_30;
      if ((int *)0x80 < piVar3) {
        ppiVar4 = &local_38;
      }
      iVar5 = FUN_001da28c(piVar2 + 1,*ppiVar4,piVar3);
      iVar5 = iVar5 + 0xc;
    }
    piVar2[1] = iVar5;
    FUN_00003628(iVar5,local_34,piVar3);
    piVar2[2] = iVar6;
    iVar6 = *(int *)(piVar2[1] + -4);
    if (iVar6 != 0) {
      puVar7 = (uint *)(piVar2 + 1);
      if (1 < *(int *)(piVar2[1] + -0xc) + 1U) {
        iVar6 = FUN_001da28c(puVar7,iVar6,iVar6);
        local_38 = (int *)(iVar6 + 0xc);
        FUN_00003628(local_38,*puVar7,*(undefined4 *)(*puVar7 - 4));
        FUN_001da314(puVar7);
        *puVar7 = (uint)local_38;
      }
      if ((undefined4 *)(*puVar7 - 0xc) != DAT_00151e70) {
        *(undefined4 *)(*puVar7 - 0xc) = 0xffffffff;
      }
      if (*(char *)*puVar7 != ',') {
        local_38 = (int *)FUN_000034d0(&DAT_00151e74);
        local_34 = (int *)0x0;
        local_30 = local_38;
        FUN_001da110(piVar2 + 1,0,0,&DAT_00151e74);
      }
    }
    if ((local_2c != 0) && (local_28 != (int *)0x0)) {
      local_38 = local_28;
      local_30 = local_28;
      local_34 = (int *)0x0;
      FUN_001da110(piVar2 + 2,0,*(undefined4 *)(piVar2[2] + -4),local_2c);
    }
    uVar1 = DAT_00151e78;
    FUN_001a0700();
    local_38 = (int *)((uint)local_38 & 0xffffff00);
    local_34 = piVar2;
    FUN_001dc79c(local_24 + 200);
    FUN_001a0d18(uVar1);
    return piVar2;
  }
  return (int *)0x0;
}

