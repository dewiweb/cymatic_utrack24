// rea decompile_all
// name: FUN_0006b9ac
// address: 0x6b9ac
// body: available
// range: 0x6b9ac-0x6bbab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0006b9ac(int *param_1,int *param_2,uint param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int local_30;
  int local_2c;
  
  piVar2 = *(int **)param_1[4];
  while( true ) {
    if (piVar2 == (int *)param_1[4]) {
      uVar10 = param_3;
      if (param_3 <= (uint)param_1[0x68]) {
        uVar10 = param_1[0x68];
      }
      param_1[0x68] = uVar10;
      local_30 = 0;
      local_2c = 0;
      iVar6 = 3;
      (**(code **)(*param_2 + 0x14))(param_2,&local_30);
      if ((local_30 == param_1[0x6c]) && (local_2c == param_1[0x6d])) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (((!bVar1) && (iVar6 = 0, param_1[0x6a] == param_1[0x6c])) &&
         (param_1[0x6b] == param_1[0x6d])) {
        param_1[0x6a] = local_30;
        param_1[0x6b] = local_2c;
        uVar7 = *DAT_0006bbac;
        uVar9 = DAT_0006bbac[1];
        puVar3 = (undefined4 *)FUN_001f01c4(0x10,1);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = DAT_0006bbb0;
          puVar3[1] = param_1;
          puVar3[2] = uVar7;
          puVar3[3] = uVar9;
        }
        (**(code **)(param_1[6] + 0x2c))(param_1 + 6,puVar3,0xffffffff);
      }
      piVar2 = (int *)param_1[1];
      iVar8 = param_1[4];
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)param_1[2];
        if (piVar2 == (int *)param_1[3]) {
          uVar10 = 1;
          if (*param_1 != 0) {
            uVar4 = *(uint *)(*param_1 + 4);
            uVar10 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
            if (uVar10 < uVar4 + 1) {
              uVar10 = uVar4 + 1;
            }
          }
          piVar2 = (int *)FUN_00173860(0xc,0);
          iVar5 = FUN_00173860(uVar10 * 0x18,0);
          piVar2[2] = iVar5;
          *piVar2 = *param_1;
          piVar2[1] = uVar10;
          *param_1 = (int)piVar2;
          piVar2 = (int *)piVar2[2];
          param_1[2] = (int)piVar2;
          param_1[3] = (int)(piVar2 + uVar10 * 6);
        }
        param_1[2] = (int)(piVar2 + 6);
      }
      else {
        param_1[1] = *piVar2;
      }
      if (piVar2 + 2 != (int *)0x0) {
        piVar2[2] = (int)param_2;
        piVar2[3] = iVar6;
        piVar2[4] = iVar6;
        piVar2[5] = param_3;
      }
      *piVar2 = iVar8;
      piVar2[1] = *(int *)(iVar8 + 4);
      **(undefined4 **)(iVar8 + 4) = piVar2;
      *(int **)(iVar8 + 4) = piVar2;
      param_1[5] = param_1[5] + 1;
      return 1;
    }
    if ((int *)piVar2[2] == param_2) break;
    piVar2 = (int *)*piVar2;
  }
  return 0;
}

