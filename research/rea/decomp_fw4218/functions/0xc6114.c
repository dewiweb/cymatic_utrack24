// rea decompile_all
// name: FUN_000c6114
// address: 0xc6114
// body: available
// range: 0xc6114-0xc62bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000c6114(undefined4 param_1,uint param_2,int *param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  
  bVar8 = 0;
  if (*param_3 != param_3[1]) {
    param_3[1] = *param_3;
  }
  do {
    if ((param_2 & 1) != 0) {
      pbVar6 = (byte *)param_3[1];
      if (pbVar6 == (byte *)param_3[2]) {
        uVar1 = (int)pbVar6 - *param_3;
        if (uVar1 < (uint)(param_3[2] - *param_3)) {
          param_3[1] = (int)(pbVar6 + 1);
          if (pbVar6 != (byte *)0x0) {
            *pbVar6 = pbVar6[-1];
          }
          pbVar2 = pbVar6 + -1;
          uVar1 = (int)pbVar2 - (int)pbVar6;
          if (0 < (int)uVar1) {
            pbVar7 = pbVar6;
            if ((uVar1 & 1) != 0) {
              pbVar2 = pbVar6 + -2;
              pbVar7 = pbVar6 + -1;
              *pbVar7 = *pbVar2;
            }
            for (iVar4 = (int)uVar1 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
              pbVar7[-1] = pbVar2[-1];
              pbVar2 = pbVar2 + -2;
              pbVar7 = pbVar7 + -2;
              *pbVar7 = *pbVar2;
            }
          }
          *pbVar6 = bVar8;
        }
        else {
          uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
          if (uVar9 < uVar1 + 1) {
            uVar9 = uVar1 + 1;
          }
          pbVar3 = (byte *)FUN_00173860(uVar9,0);
          pbVar7 = pbVar3;
          for (pbVar2 = (byte *)*param_3; pbVar2 != pbVar6; pbVar2 = pbVar2 + 1) {
            if (pbVar7 != (byte *)0x0) {
              *pbVar7 = *pbVar2;
            }
            pbVar7 = pbVar7 + 1;
          }
          if (pbVar3 + ((int)pbVar6 - *param_3) != (byte *)0x0) {
            pbVar3[(int)pbVar6 - *param_3] = bVar8;
          }
          pbVar7 = (byte *)param_3[1];
          pbVar2 = pbVar3 + ((int)pbVar6 - *param_3);
          for (; pbVar6 != pbVar7; pbVar6 = pbVar6 + 1) {
            pbVar2 = pbVar2 + 1;
            if (pbVar2 != (byte *)0x0) {
              *pbVar2 = *pbVar6;
            }
          }
          iVar4 = *param_3;
          iVar5 = param_3[1];
          FUN_00173a54(iVar4,param_3[2] - iVar4,0);
          param_3[2] = (int)(pbVar3 + uVar9);
          param_3[1] = (int)(pbVar3 + (iVar5 - iVar4) + 1);
          *param_3 = (int)pbVar3;
        }
      }
      else {
        param_3[1] = (int)(pbVar6 + 1);
        if (pbVar6 != (byte *)0x0) {
          *pbVar6 = bVar8;
        }
      }
    }
    bVar8 = bVar8 + 1;
    param_2 = (int)param_2 >> 1;
  } while (bVar8 < 0x10);
  return 1;
}

