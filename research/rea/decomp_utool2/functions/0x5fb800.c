// rea decompile_all
// name: FUN_005fb800
// address: 0x5fb800
// body: available
// range: 0x5fb800-0x5fba06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005fb800(int param_1,int *param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint in_EDX;
  int iVar5;
  int iVar6;
  float fVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  double dVar13;
  undefined8 local_18;
  int local_c;
  
  dVar8 = 0.0;
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  iVar5 = 1 << ((byte)(param_1 + -1) & 0x1f);
  uVar2 = 0;
  iVar6 = iVar5 + -1;
  iVar5 = -iVar5;
  local_c = in_ECX;
  if (in_EDX != 0) {
    do {
      fVar7 = *(float *)(in_ECX + uVar2 * 4);
      uVar9 = 0;
      uVar10 = 0;
      uVar12 = FUN_00411660();
      in_ECX = (int)((ulonglong)uVar12 >> 0x20);
      uVar2 = (int)uVar12 + 1;
      dVar13 = (double)fVar7;
      if ((double)fVar7 <= auVar11._0_8_) {
        dVar13 = auVar11._0_8_;
      }
      auVar11._8_4_ = uVar9;
      auVar11._0_8_ = dVar13;
      auVar11._12_4_ = uVar10;
    } while (uVar2 < in_EDX);
    if (dVar8 < dVar13) {
      FUN_004ccf89(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20),(int)&local_18 + 4);
      iVar4 = ((param_1 + -1) - ((int)local_18._4_4_ + -1)) + -1;
      *param_3 = iVar4;
      if (iVar4 < 0x10) {
        if (iVar4 < -0x10) {
          return 1;
        }
        if (iVar4 < 0) {
          bVar1 = -(char)iVar4 & 0x1f;
          dVar8 = 0.0;
          local_c = local_c - (int)param_2;
          local_18._4_4_ = (float)(int)(1 << bVar1 | 1U >> 0x20 - bVar1);
          do {
            dVar8 = (double)(*(float *)((int)param_2 + local_c) / local_18._4_4_) + dVar8;
            dVar13 = __copysign(0.5,dVar8);
            iVar3 = (int)(dVar13 + dVar8);
            iVar4 = iVar6;
            if ((iVar3 <= iVar6) && (iVar4 = iVar3, iVar3 < iVar5)) {
              iVar4 = iVar5;
            }
            *param_2 = iVar4;
            param_2 = param_2 + 1;
            dVar8 = dVar8 - (double)iVar4;
            in_EDX = in_EDX - 1;
          } while (in_EDX != 0);
          *param_3 = 0;
          return 0;
        }
      }
      else {
        *param_3 = 0xf;
      }
      dVar8 = 0.0;
      local_c = local_c - (int)param_2;
      do {
        dVar8 = (double)((float)(1 << ((byte)*param_3 & 0x1f)) * *(float *)(local_c + (int)param_2))
                + dVar8;
        local_18 = dVar8;
        dVar13 = __copysign(0.5,dVar8);
        iVar3 = (int)(dVar13 + local_18);
        iVar4 = iVar6;
        if ((iVar3 <= iVar6) && (iVar4 = iVar3, iVar3 < iVar5)) {
          iVar4 = iVar5;
        }
        *param_2 = iVar4;
        param_2 = param_2 + 1;
        dVar8 = dVar8 - (double)iVar4;
        in_EDX = in_EDX - 1;
      } while (in_EDX != 0);
      return 0;
    }
  }
  return 2;
}

