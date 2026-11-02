// rea decompile_all
// name: FUN_0041273c
// address: 0x41273c
// body: available
// range: 0x41273c-0x41287b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0041273c(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int in_ECX;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined1 *puVar9;
  int local_c;
  
  iVar3 = *(int *)(in_ECX + 0x14);
  uVar2 = param_1 - *(int *)(in_ECX + 0x18);
  if (uVar2 < *(uint *)(in_ECX + 0x1c)) {
    iVar6 = *(int *)(iVar3 + 0x10);
    puVar9 = (undefined1 *)((uVar2 + 2) * 0x10 + in_ECX);
    *(undefined4 *)(puVar9 + 0xc) = 0;
    iVar3 = (**(code **)(iVar6 + 0x18))(iVar3,param_1);
    if (iVar3 == 0) {
      iVar3 = *(int *)(local_c + 0x54);
      puVar1 = (uint *)(iVar3 + 0x4c);
      if (*(int *)(iVar3 + 0x48) == 0x62697473) {
        iVar8 = *(int *)(iVar3 + 0x44) + 0x20 >> 6;
        iVar6 = *(int *)(iVar3 + 0x40) + 0x20 >> 6;
        if (((((uint)*(byte *)puVar1 == *puVar1) &&
             ((uint)*(byte *)(iVar3 + 0x50) == *(uint *)(iVar3 + 0x50))) &&
            ((int)*(char *)(iVar3 + 0x54) == *(int *)(iVar3 + 0x54))) &&
           ((((int)*(char *)(iVar3 + 100) == *(int *)(iVar3 + 100) &&
             ((int)*(char *)(iVar3 + 0x68) == *(int *)(iVar3 + 0x68))) &&
            ((cVar5 = (char)iVar6, cVar5 == iVar6 && (cVar7 = (char)iVar8, cVar7 == iVar8)))))) {
          *puVar9 = *(undefined1 *)(iVar3 + 0x50);
          puVar9[1] = *(byte *)puVar1;
          *(short *)(puVar9 + 6) = (short)*(char *)(iVar3 + 0x54);
          puVar9[2] = *(undefined1 *)(iVar3 + 100);
          puVar9[3] = *(undefined1 *)(iVar3 + 0x68);
          puVar9[8] = cVar5;
          puVar9[9] = cVar7;
          puVar9[4] = *(undefined1 *)(iVar3 + 0x5e);
          puVar9[5] = *(char *)(iVar3 + 0x5c) + -1;
          iVar3 = FUN_004126b0(puVar9);
          if (param_2 != (int *)0x0) {
            iVar6 = (int)*(short *)(puVar9 + 6);
            if (*(short *)(puVar9 + 6) < 0) {
              iVar6 = -iVar6;
            }
            *param_2 = (uint)(byte)puVar9[1] * iVar6;
          }
          if (iVar3 == 0) {
            return 0;
          }
          if (iVar3 == 0x40) {
            return 0x40;
          }
        }
      }
    }
    uVar4 = 0;
    *puVar9 = 0xff;
    puVar9[1] = 0;
    *(undefined4 *)(puVar9 + 0xc) = 0;
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    uVar4 = 6;
  }
  return uVar4;
}

