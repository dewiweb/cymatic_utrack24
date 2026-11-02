// rea decompile_all
// name: FUN_001b3dbc
// address: 0x1b3dbc
// body: available
// range: 0x1b3dbc-0x1b3fe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b3dbc(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  uint local_74;
  int aiStack_70 [16];
  uint local_30 [3];
  
  FUN_00002934(aiStack_70,0x20,u_test__u__u_wav_001b3fe8,*(undefined4 *)(param_1 + 0x144),param_3);
  uVar1 = FUN_000038be(aiStack_70);
  piVar3 = DAT_001b4008;
  piVar2 = (int *)*param_2;
  piVar8 = DAT_001b4008 + 3;
  if (uVar1 == 0) {
    piVar3 = piVar2 + -3;
    iVar7 = *piVar3;
    if (iVar7 != 0) {
      if (piVar2 != piVar8) {
        if (iVar7 == -1) {
          FUN_00173a54(piVar3,piVar2[-2] + 8,0);
        }
        else if (piVar3 != DAT_001b4008) {
          *piVar3 = iVar7 + -1;
        }
      }
      *param_2 = (int)piVar8;
      goto LAB_001b3fd4;
    }
    piVar2[-1] = 0;
    puVar6 = (undefined2 *)*param_2;
LAB_001b3fd0:
    *puVar6 = 0;
  }
  else {
    uVar4 = piVar2[-1];
    if ((piVar2[-3] + 1U < 2) && (uVar1 <= (uint)piVar2[-2])) {
      bVar9 = aiStack_70 <= piVar2;
      if (piVar2 <= aiStack_70) {
        bVar9 = (int *)((int)piVar2 + uVar4 * 2) <= aiStack_70;
      }
      if (bVar9) {
        FUN_000037aa(piVar2,aiStack_70,uVar1);
        *(uint *)(*param_2 + -4) = uVar1;
        puVar6 = (undefined2 *)(*param_2 + uVar1 * 2);
        goto LAB_001b3fd0;
      }
    }
    local_30[0] = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (local_30[0] < uVar4 + 0x80) {
      local_30[0] = uVar4 + 0x80;
    }
    puVar5 = local_30;
    if (local_30[0] < uVar1) {
      puVar5 = &local_74;
    }
    local_74 = uVar1;
    uVar4 = *puVar5;
    if (0xfffffff1 < uVar4) {
      FUN_00173800(8,_DAT_001b400c,_DAT_001b400c,uVar4,0xfffffff1);
    }
    if (uVar4 < uVar1) {
      FUN_00173800(8,_DAT_001b400c,_DAT_001b400c,uVar1,uVar4);
    }
    piVar2 = piVar3;
    if (uVar4 != 0) {
      piVar2 = (int *)FUN_00173860((uVar4 + 8) * 2,0);
      if (piVar2 != (int *)0x0) {
        *piVar2 = 0;
        piVar2[1] = 0;
        piVar2[2] = 0;
      }
      piVar2[2] = uVar1;
      *piVar2 = 0;
      piVar2[1] = uVar4;
      puVar6 = (undefined2 *)((int)piVar2 + uVar1 * 2 + 0xc);
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
      }
    }
    FUN_000039e0(piVar2 + 3,aiStack_70,uVar1 << 1);
    if ((int *)*param_2 != piVar8) {
      piVar8 = (int *)*param_2 + -3;
      iVar7 = *piVar8;
      if ((iVar7 == -1) || ((piVar8 != piVar3 && (*piVar8 = iVar7 + -1, iVar7 == 0)))) {
        FUN_00173a54(*param_2 + -0xc,*(int *)(*param_2 + -8) + 8,0);
      }
    }
    *param_2 = (int)(piVar2 + 3);
  }
LAB_001b3fd4:
  FUN_00002898(s___TRACE__File___ls__001b400e + 2,aiStack_70);
  return;
}

