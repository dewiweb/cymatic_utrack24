// rea decompile_all
// name: FUN_004252cc
// address: 0x4252cc
// body: available
// range: 0x4252cc-0x4253a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004252cc(uint param_1,undefined4 *param_2,int *param_3)

{
  ushort *puVar1;
  int *in_ECX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  
  if ((*(ushort *)(in_ECX + 10) <= param_1) && (param_1 <= *(ushort *)((int)in_ECX + 0x2a))) {
    puVar1 = (ushort *)in_ECX[1];
    puVar5 = puVar1 + *in_ECX * 0x14;
    if (puVar1 != (ushort *)0x0) {
      for (; puVar1 < puVar5; puVar1 = puVar1 + 0x14) {
        if ((*puVar1 <= param_1) && (param_1 <= puVar1[1])) {
          uVar2 = (uint)puVar1[2];
          uVar4 = (uint)(ushort)((short)param_1 - *puVar1);
          if (uVar2 == 1) {
LAB_00425392:
            iVar3 = *(int *)(*(int *)(puVar1 + 0xe) + uVar4 * 4);
          }
          else {
            if (uVar2 != 2) {
              if (uVar2 == 3) goto LAB_00425392;
              if (uVar2 - 4 < 2) {
                uVar2 = 0;
                if (*(uint *)(puVar1 + 0xc) != 0) {
                  puVar5 = *(ushort **)(puVar1 + 0x10);
                  do {
                    if (*puVar5 == param_1) {
                      if (puVar1[2] == 4) {
                        *param_3 = *(int *)(*(int *)(puVar1 + 0xe) + uVar2 * 4);
                      }
                      else {
                        *param_3 = *(int *)(puVar1 + 6) * uVar2 + *(int *)(puVar1 + 4);
                      }
LAB_0042539d:
                      *param_2 = puVar1;
                      return 0;
                    }
                    uVar2 = uVar2 + 1;
                    puVar5 = puVar5 + 1;
                  } while (uVar2 < *(uint *)(puVar1 + 0xc));
                }
              }
              break;
            }
            iVar3 = uVar4 * *(int *)(puVar1 + 6) + *(int *)(puVar1 + 4);
          }
          *param_3 = iVar3;
          goto LAB_0042539d;
        }
      }
    }
  }
  *param_2 = 0;
  *param_3 = 0;
  return 6;
}

