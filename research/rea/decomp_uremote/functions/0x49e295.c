// rea decompile_all
// name: FUN_0049e295
// address: 0x49e295
// body: available
// range: 0x49e295-0x49e45c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0049e295(float param_1)

{
  char cVar1;
  float *pfVar2;
  int iVar3;
  float *unaff_EBX;
  float *pfVar4;
  float10 fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  if (param_1 != *unaff_EBX) {
    *unaff_EBX = param_1;
    pfVar2 = (float *)FUN_0049e45d(unaff_EBX[6],unaff_EBX[7],unaff_EBX[8],param_1);
    pfVar4 = unaff_EBX;
    for (iVar3 = 5; pfVar4 = pfVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = *pfVar2;
      pfVar2 = pfVar2 + 1;
    }
  }
  if (3.0 / param_1 + unaff_EBX[6] <= unaff_EBX[8]) {
    FUN_0047888f();
    FUN_0047b2de();
    while( true ) {
      cVar1 = FUN_0047b2fa();
      if (cVar1 == '\0') break;
      if (local_54 == 0) {
        fVar5 = (float10)FUN_0049e561(local_4c);
        FUN_00478b0d(local_50,(float)fVar5);
      }
      else if (local_54 == 1) {
        fVar5 = (float10)FUN_0049e561(local_4c);
        FUN_00478ba1(local_50,(float)fVar5);
      }
      else if (local_54 == 2) {
        fVar5 = (float10)FUN_0049e561(local_44);
        fVar9 = (float)fVar5;
        uVar6 = local_48;
        fVar5 = (float10)FUN_0049e561(local_4c);
        FUN_00478c33(local_50,(float)fVar5,uVar6,fVar9);
      }
      else if (local_54 == 3) {
        fVar5 = (float10)FUN_0049e561(local_3c);
        fVar9 = (float)fVar5;
        uVar8 = local_40;
        fVar5 = (float10)FUN_0049e561(local_44);
        fVar7 = (float)fVar5;
        uVar6 = local_48;
        fVar5 = (float10)FUN_0049e561(local_4c);
        FUN_00478d07(local_50,(float)fVar5,uVar6,fVar7,uVar8,fVar9);
      }
      else if (local_54 == 4) {
        FUN_00478e1f();
      }
    }
    FUN_0047899c();
    FUN_004f7994();
  }
  return;
}

