// rea decompile_all
// name: FUN_005fe060
// address: 0x5fe060
// body: available
// range: 0x5fe060-0x5fe23d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005fe060(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int *in_ECX;
  int *in_EDX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  bVar4 = (byte)param_2;
  uVar5 = -1 << (bVar4 & 0x1f);
  uVar6 = 0xffffffff >> (0x1f - bVar4 & 0x1f);
  uVar1 = param_2 + 1;
  do {
    if (param_1 == 0) {
      return 1;
    }
    uVar7 = *in_EDX >> 0x1f ^ *in_EDX * 2;
    uVar9 = uVar7 >> (bVar4 & 0x1f);
    iVar3 = in_ECX[4];
    if ((iVar3 == 0) || (uVar2 = iVar3 + uVar9 + uVar1, 0x1f < uVar2)) {
      uVar2 = in_ECX[2];
      if ((uVar2 <= in_ECX[3] + 1 + iVar3 + uVar9) &&
         (uVar8 = (param_2 + 0x20 + iVar3 + uVar9 >> 5) + in_ECX[3], uVar2 < uVar8)) {
        uVar2 = uVar8 - uVar2 & 0x3ff;
        if (uVar2 != 0) {
          uVar8 = uVar8 + (0x400 - uVar2);
        }
        if (uVar8 == 0) {
          iVar3 = 0;
        }
        else {
          if ((uint)(0xffffffff / (ulonglong)uVar8) < 4) {
            return 0;
          }
          iVar3 = uVar8 * 4;
        }
        iVar3 = FUN_004c553b(*in_ECX,iVar3);
        if (iVar3 == 0) {
          return 0;
        }
        *in_ECX = iVar3;
        in_ECX[2] = uVar8;
      }
      if (uVar9 != 0) {
        iVar3 = in_ECX[4];
        if (iVar3 != 0) {
          uVar2 = 0x20 - iVar3;
          if (uVar9 < uVar2) {
            in_ECX[1] = in_ECX[1] << ((byte)uVar9 & 0x1f);
            in_ECX[4] = iVar3 + uVar9;
            goto LAB_005fe1c5;
          }
          in_ECX[1] = in_ECX[1] << ((byte)uVar2 & 0x1f);
          uVar9 = uVar9 - uVar2;
          uVar2 = in_ECX[1];
          *(uint *)(*in_ECX + in_ECX[3] * 4) =
               uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
          in_ECX[3] = in_ECX[3] + 1;
          in_ECX[4] = 0;
        }
        if (0x1f < uVar9) {
          uVar2 = uVar9 >> 5;
          do {
            uVar9 = uVar9 - 0x20;
            *(undefined4 *)(*in_ECX + in_ECX[3] * 4) = 0;
            in_ECX[3] = in_ECX[3] + 1;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        if (uVar9 != 0) {
          in_ECX[1] = 0;
          in_ECX[4] = uVar9;
        }
      }
LAB_005fe1c5:
      uVar9 = 0x20 - in_ECX[4];
      uVar7 = (uVar7 | uVar5) & uVar6;
      if (uVar1 < uVar9) {
        in_ECX[1] = in_ECX[1] << ((byte)uVar1 & 0x1f) | uVar7;
        in_ECX[4] = in_ECX[4] + uVar1;
      }
      else {
        in_ECX[4] = uVar1 - uVar9;
        uVar9 = uVar7 >> ((byte)(uVar1 - uVar9) & 0x1f) | in_ECX[1] << ((byte)uVar9 & 0x1f);
        *(uint *)(*in_ECX + in_ECX[3] * 4) =
             uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        in_ECX[3] = in_ECX[3] + 1;
        in_ECX[1] = uVar7;
      }
    }
    else {
      in_ECX[4] = uVar2;
      in_ECX[1] = in_ECX[1] << ((byte)uVar9 + (byte)uVar1 & 0x1f) | (uVar7 | uVar5) & uVar6;
    }
    in_EDX = in_EDX + 1;
    param_1 = param_1 + -1;
  } while( true );
}

