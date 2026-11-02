// rea decompile_all
// name: FUN_00426115
// address: 0x426115
// body: available
// range: 0x426115-0x4262f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00426115(uint param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  uint _MaxCount;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  int local_c;
  
  iVar2 = param_1;
  iVar7 = *(int *)(param_1 + 0x58);
  *param_3 = 0;
  if ((*(char *)(param_1 + 0x32c) == '\0') &&
     (iVar4 = FUN_00425fd9(*(undefined4 *)(param_1 + 0x68)), iVar4 != 0)) {
    return iVar4;
  }
  iVar4 = *(int *)(param_1 + 0x328);
  iVar1 = *(int *)(param_1 + 0x318);
  local_c = iVar1 + 8 + iVar4 * 4;
  if (iVar7 == 0) {
    return 6;
  }
  if (param_2 != (char *)0x0) {
    sVar5 = _strlen(param_2);
    if (sVar5 == 0) {
      return 6;
    }
    if (iVar4 != 0) {
      puVar11 = (undefined1 *)(iVar1 + 7);
      puVar13 = (undefined1 *)(iVar1 + 6);
      param_1 = iVar4;
      while( true ) {
        puVar14 = puVar13 + 2;
        puVar10 = puVar11 + 2;
        puVar13 = puVar13 + 4;
        puVar11 = puVar11 + 4;
        uVar6 = (uint)CONCAT11(*puVar13,*puVar11);
        if (CONCAT11(*puVar14,*puVar10) == *(short *)(iVar7 + 0xe)) break;
        local_c = local_c + uVar6 * 10;
        param_1 = param_1 + -1;
        if (param_1 == 0) {
          return 6;
        }
      }
      if (uVar6 == 0) {
        return 6;
      }
      pbVar15 = (byte *)(local_c + 5);
      param_1 = uVar6;
      do {
        bVar3 = *pbVar15;
        if ((bVar3 & 0x10) != 0) {
          uVar6 = CONCAT31(CONCAT21(CONCAT11(pbVar15[-5],pbVar15[-4]),pbVar15[-3]),pbVar15[-2]);
          uVar12 = CONCAT31(CONCAT21(CONCAT11(pbVar15[1],pbVar15[2]),pbVar15[3]),pbVar15[4]);
          if (((uVar6 < *(uint *)(iVar2 + 0x324)) &&
              (_MaxCount = *(uint *)(iVar2 + 0x324) - uVar6, sVar5 < _MaxCount)) &&
             (iVar7 = _strncmp(param_2,(char *)(*(int *)(iVar2 + 800) + uVar6),_MaxCount),
             iVar7 == 0)) {
            bVar3 = bVar3 & 0xf;
            if (bVar3 < 2) {
              if ((uVar12 < *(uint *)(iVar2 + 0x324)) &&
                 (pvVar8 = _memchr((void *)(*(int *)(iVar2 + 800) + uVar12),0,
                                   *(uint *)(iVar2 + 0x324)), pvVar8 != (void *)0x0)) {
                *param_3 = 1;
                param_3[1] = *(int *)(iVar2 + 800) + uVar12;
                return 0;
              }
            }
            else {
              uVar9 = 2;
              if ((bVar3 == 2) || (uVar9 = 3, bVar3 == 3)) {
                *param_3 = uVar9;
                param_3[1] = uVar12;
                return 0;
              }
            }
          }
        }
        pbVar15 = pbVar15 + 10;
        param_1 = param_1 - 1;
        if (param_1 == 0) {
          return 6;
        }
      } while( true );
    }
    return 6;
  }
  return 6;
}

