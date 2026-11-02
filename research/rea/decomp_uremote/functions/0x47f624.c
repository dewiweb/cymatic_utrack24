// rea decompile_all
// name: FUN_0047f624
// address: 0x47f624
// body: available
// range: 0x47f624-0x47f74d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0047f624(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int in_EDX;
  undefined4 *puVar5;
  undefined4 *local_3c [2];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  char local_12;
  undefined1 local_11 [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x47f630;
  iVar2 = (**(code **)(**(int **)(in_EDX + 4) + 0xc))(local_11,1);
  if (iVar2 == 1) {
    FUN_0047f2d7();
    iVar2 = 0;
    if (-1 < in_ECX) {
      puVar1 = (undefined1 *)(in_EDX + 0x10c + in_ECX * 4);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
    }
    local_18 = 0;
    local_1c = 8;
    local_20 = 0;
    FUN_0047e7d7(local_3c,1);
    puVar5 = local_3c[0];
    local_8 = 0;
    local_12 = FUN_0047e3d7();
    while (iVar4 = FUN_0047f33b(), -1 < iVar4) {
      if (local_12 == '\0') {
        puVar1 = (undefined1 *)(in_EDX + 0x10c + iVar4 * 4);
        *(undefined1 *)puVar5 = *puVar1;
        *(undefined1 *)((int)puVar5 + 1) = puVar1[1];
        *(undefined1 *)((int)puVar5 + 2) = puVar1[2];
      }
      else {
        *puVar5 = *(undefined4 *)(in_EDX + 0x10c + iVar4 * 4);
      }
      puVar5 = (undefined4 *)((int)puVar5 + local_30);
      local_18 = local_18 + 1;
      if (local_18 == local_2c) {
        local_18 = 0;
        if (param_1 == 0) {
          iVar2 = iVar2 + 1;
          if (local_28 <= iVar2) break;
        }
        else {
          iVar2 = iVar2 + local_1c;
          while (local_28 <= iVar2) {
            local_20 = local_20 + 1;
            if (local_20 == 1) {
              iVar2 = 4;
              local_1c = 8;
            }
            else if (local_20 == 2) {
              iVar2 = 2;
              local_1c = 4;
            }
            else {
              if (local_20 != 3) goto LAB_0047f738;
              iVar2 = 1;
              local_1c = 2;
            }
          }
        }
        puVar5 = (undefined4 *)(local_34 * iVar2 + (int)local_3c[0]);
      }
    }
LAB_0047f738:
    local_8 = 0xffffffff;
    FUN_0047e819();
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

