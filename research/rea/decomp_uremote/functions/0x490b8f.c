// rea decompile_all
// name: FUN_00490b8f
// address: 0x490b8f
// body: available
// range: 0x490b8f-0x490cdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00490b8f(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int *piVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  undefined4 local_8;
  
  piVar5 = param_2;
  cVar4 = (char)param_3;
  bVar12 = 8 - cVar4;
  uVar13 = 1 << (bVar12 & 0x1f);
  uVar14 = (1 << (0x10U - cVar4 & 0x1f)) - 1;
  iVar7 = FUN_00491655(param_1,uVar13 << 2);
  param_2 = (int *)0x0;
  *piVar5 = iVar7;
  if (uVar13 != 0) {
    iVar8 = FUN_00490a15();
    do {
      iVar9 = FUN_0049174b(param_1,0x200);
      *(int *)(iVar7 + (int)param_2 * 4) = iVar9;
      local_8 = 0;
      if (iVar8 == 0) {
        do {
          uVar11 = (local_8 << (bVar12 & 0x1f)) + (int)param_2;
          if (param_3 != 0) {
            uVar11 = (uVar11 * 0xffff + (1 << (0xfU - cVar4 & 0x1f))) / uVar14;
          }
          uVar1 = local_8 + 1;
          *(short *)(iVar9 + local_8 * 2) = (short)uVar11;
          local_8 = uVar1;
        } while (uVar1 < 0x100);
      }
      else {
        dVar2 = (double)(int)uVar14;
        if ((int)uVar14 < 0) {
          dVar2 = dVar2 + 4294967296.0;
        }
        do {
          iVar10 = (local_8 << (bVar12 & 0x1f)) + (int)param_2;
          dVar3 = (double)iVar10;
          if (iVar10 < 0) {
            dVar3 = dVar3 + 4294967296.0;
          }
          FUN_005b0820(dVar3 / dVar2,(double)param_4 * 1e-05);
          FUN_005af8c0();
          uVar6 = FUN_005b3fe6();
          uVar11 = local_8 + 1;
          *(undefined2 *)(iVar9 + local_8 * 2) = uVar6;
          local_8 = uVar11;
        } while (uVar11 < 0x100);
      }
      param_2 = (int *)((int)param_2 + 1);
    } while (param_2 < uVar13);
  }
  return;
}

