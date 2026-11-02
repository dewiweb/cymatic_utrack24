// rea decompile_all
// name: FUN_004320ca
// address: 0x4320ca
// body: available
// range: 0x4320ca-0x432288 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004320ca(int param_1,int param_2)

{
  char cVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  int in_EAX;
  ushort *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  ushort *puVar10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  puVar2 = *(ushort **)(in_EAX + 0x24);
  puVar10 = *(ushort **)(in_EAX + 0x20);
  if (puVar2 < (ushort *)((int)puVar10 + 0x65U)) {
    local_8 = 2;
  }
  else {
    puVar5 = (ushort *)((int)puVar10 + *(ushort *)((int)puVar10 + 99) + 0x75);
    if (puVar2 < puVar5 + 9) {
      return 0;
    }
    if (*puVar5 < 0x12) {
      return 0;
    }
    puVar5 = (ushort *)(*(int *)(puVar5 + 7) + (int)puVar10);
    if (puVar5 == puVar10) {
      return 0;
    }
    puVar10 = puVar5 + 1;
    if (puVar10 <= puVar2) {
      uVar8 = (uint)*puVar5;
      *(uint *)(param_2 + 0x28) = uVar8;
      if (puVar10 + uVar8 * 2 <= puVar2) {
        if (uVar8 == 0) {
          return 0;
        }
        puVar6 = (undefined4 *)FUN_00411976(0x10,0,&local_8);
        *(undefined4 **)(param_2 + 0x24) = puVar6;
        if (local_8 == 0) {
          local_c = 0;
          puVar2 = puVar10 + *(int *)(param_2 + 0x28) * 2;
          iVar3 = *(int *)(param_1 + 0x5c);
          if (0 < *(int *)(param_1 + 0x24)) {
            piVar9 = *(int **)(param_1 + 0x28);
            do {
              if (*(short *)(*piVar9 + 8) == 7) {
                local_8 = FUN_0040f872();
                if (local_8 != 0) goto LAB_004320f4;
                break;
              }
              local_c = local_c + 1;
              piVar9 = piVar9 + 1;
            } while (local_c < *(int *)(param_1 + 0x24));
          }
          for (; puVar10 < puVar2; puVar10 = puVar10 + 2) {
            uVar7 = FUN_0040f9ab((char)*puVar10);
            *puVar6 = uVar7;
            uVar7 = FUN_0040f9ab(*(undefined1 *)((int)puVar10 + 1));
            puVar6[1] = uVar7;
            cVar1 = *(char *)((int)puVar10 + 3);
            uVar4 = puVar10[1];
            puVar6[3] = 0;
            puVar6[2] = (int)(short)((short)cVar1 << 8) | (uint)(byte)uVar4;
            puVar6 = puVar6 + 4;
          }
          if (iVar3 != 0) {
            local_8 = FUN_0040f872();
          }
          if (local_8 == 0) {
            _qsort(*(void **)(param_2 + 0x24),*(size_t *)(param_2 + 0x28),0x10,
                   (_PtFuncCompare *)&LAB_0041ad74);
            return local_8;
          }
        }
        goto LAB_004320f4;
      }
    }
    local_8 = 2;
  }
LAB_004320f4:
  FUN_00411a5c(*(undefined4 *)(param_2 + 0x24));
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  return local_8;
}

